#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 *
 */
int main(void)
{
	int a;
	int b;
	int c;

	for (a = '0'; a <= '9'; a++)
	{
		for (b = '0'; b <= '9'; b++)
		{
			for (c = '0'; c <= '9'; c++)
			{
				if (a == '9' && b == '8' && c == '7')
					continue;

				putchar(a);
				putchar(b);
				putchar(c);
			}
			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);