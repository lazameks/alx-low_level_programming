#include <stdio.h>
#include <stdlib.h>
#include <time.h>

/**
 * genpasswd - Generate a random password of desired lenght
 * @len: desired lenght of password
 * @passwd: Generated password
 *
 */
void genpasswd(int len, char *passwd)
{
	int i, index;

	const char charset[] = "abcdefghijklmnopqrstuvwxwzABCDEFGHIJKLMNOPQRSTUVWXYZ0123456789!@#][%&*";

	srand(time(NULL));

	for (i = 0; i < len; i++)
	{
		index = rand() % (sizeof(charset) - 1);
		*(passwd + i) = charset[index];
	}
	*(passwd + len) = '\0';
}

/**
 * main - entry point
 *
 * return: always (0)
 */
int main(void)
{
	int len = 10;
	char passwd[] = {0};

	genpasswd(len, passwd);

	return (0);
}
