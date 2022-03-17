#include<stdio.h>
#include<stdlib.h>

/**
 * main - Entry point
 *
 * Return: Always 0 (Success)
 */
int main(void)
{
	int nm1;
	int nm2;

	for (nm1 = '0'; nm1 <= '9'; nm1++)
	{
		for (nm2 = nm1 + 1; nm2 <= '9'; nm2++)
		{
			putchar(nm1);
			putchar(nm2);

			if (nm1 == '8' && nm2 == '9')
				continue;

			putchar(',');
			putchar(' ');
		}
	}
	putchar('\n');

	return (0);
}
