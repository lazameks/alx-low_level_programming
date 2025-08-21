#include <stdarg.h>
#include <stdio.h>
/**
 * print_all - Prints anything.
 * @format: A list of types of arguments passed to the function.
 * @...: variable argument to be printed.
 */
void print_all(const char * const format, ...)
{
	va_list args;
	unsigned int i = 0;
	char *sep = "";
	char *str;

	va_start(args, format);
	while (format && format[i])
	{
		switch (format[i])
		{
			case 'c':
				printf("%s%c", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'i':
				printf("%s%d", sep, va_arg(args, int));
				sep = ", ";
				break;
			case 'f':
				printf("%s%f", sep, va_arg(args, double));
				sep = ", ";
				break;
			case 's':
				str = va_arg(args, char *);
				printf("%s", sep);
				if (str == NULL)
					printf("(nil)");
				if (str != NULL)
					printf("%s", str);
				sep = ", ";
				break;
			default:
				break;
		}
		i++;
	}
	printf("\n");
	va_end(args);
}

