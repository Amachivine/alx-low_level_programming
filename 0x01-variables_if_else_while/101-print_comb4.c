#include <stdio.h>

/**
 * main - prints out all possible different combinations of three digits.
 * Return: Always 0 (Success)
 */

int main(void)
{
	int ones;
	int tens;
	int hundreds;

	for (hundreds = 0; hundreds <= 9; hundreds++)
	{
		for (tens = 0; tens <= 9; tens++)
		{
			for (ones = 0; ones <= 9; ones++)
			{
				if (hundreds > tens && tens > ones)
				{
					putchar(ones + '0');
					putchar(tens + '0');
					putchar(hundreds + '0');
					if (ones != 7 || tens != 8 || hundreds != 9)
					{
						putchar(',');
						putchar(' ');
					}
				}
			}
		}
	}
	putchar('\n');
	return (0);
}
