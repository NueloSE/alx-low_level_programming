#include "main.h"

/**
 * jack_bauer - printz all the hours in a day starting from 00:00 to 23:59
 * Return: void
 */

void jack_bauer(void)
{
	int min1, min2, sec1, sec2;

	for (min1 = 0; min1 <= 2; min1++)
	{
		for (min2 = 0; min2 <= 9; min2++)
		{
			for (sec1 = 0; sec1 <= 5; sec1++)
			{
				for (sec2 = 0; sec2 <= 9; sec2++)
				{
					if (min1 == 2 && min2 == 3 && sec1 == 5 && sec2 == 9)
					{
						_putchar(min1 + '0');
						_putchar(min2 + '0');
						_putchar(':');
						_putchar(sec1 + '0');
						_putchar(sec2 + '0');
						_putchar('\n');
						return;
					}
					else
					{
						_putchar(min1 + '0');
						_putchar(min2 + '0');
						_putchar(':');
						_putchar(sec1 + '0');
						_putchar(sec2 + '0');
						_putchar('\n');
					}

				}
			}
		}
	}
}
