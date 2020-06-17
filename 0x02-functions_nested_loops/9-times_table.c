#include "holberton.h"
/**
 *times_table - Print table
 *
 *Return: Always 0.
 **/
void times_table(void)
{
	int h, v;
	int n = 0;

	for (h = 0; h <= 9; h++)
	{
		for (v = 0; v <= 9; v++)
		{
			n = h * v;
			if (n > 9)
			{
				_putchar ((n / 10) + '0');
				_putchar ((n % 10) + '0');
				if (v <= 8)
				{
					_putchar (',');
					_putchar (' ');
				}
			}
			if (n <= 9)
			{
				_putchar (n + '0');
				if (v <= 8)
				{
					_putchar (',');
					_putchar (' ');
					if ((n + h ) < 10 )
					_putchar (' ');
				}
			}
		}
		_putchar ('\n');
	}
}
