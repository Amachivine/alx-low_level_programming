#include <stdio.h>
#include <stdlib.h>

/**
 * main - prints alphabets in reverse order
 *
 * Return 0 if successful
 */

int main(void)
{
	int ch = 'z';

	while (ch >= 'a')
	{
		putchar(ch);
		ch--;
	}
	putchar('\n');
	return (0);
}
