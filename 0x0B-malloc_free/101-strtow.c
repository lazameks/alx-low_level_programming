#include "main.h"

int word_count(char *s)
{
	int space, w, i;

	w = 0;
	space = 0;

	for (i = 0; s[i] != '\0'; i++)
	{
		if (s[i] == ' ')
			space = 0;
		if (space == 0)
			w++;
	}
}

