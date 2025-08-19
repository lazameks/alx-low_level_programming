#include <stdio.h>
#include <stdarg.h>
/**
 * print_strings - prints strings, followed by a new line
 * @seperator: string to print between strings
 * @n: number of strings passed
 * @...: variable strings
 */
void print_strings(const char *seperator, const unsigned int n, ...)
{
	va_list args;
	unsigned int i;
	char *str;

	va_start(args, n);

	for (i = 0; i < n; i++)
	{
		str = va_arg(args, char *);

		if (str == NULL)
			printf("(nil)");
		else
			printf("%s", str);

		if (seperator != NULL && i != (n - 1))
			printf("%s", seperator);
	}
	printf("\n");
}
