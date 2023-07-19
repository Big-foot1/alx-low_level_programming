#include "main.h"
#include "time.h"

/**
 * jack_bauer - prints every hour of the day
 * Return: Everyy minute of the day
 */
void jack_bauer(void)
{
	int hrs, mins;

	for (hrs = 0; hrs <= 24; hrs++)
	{
		for (mins = 0; mins <= 60; mins++)
		{
			if (mins < 10 && hrs < 10)
			{
				_putchar('0');
				_putchar(hrs + '0');
				_putchar(':');
				_putchar('0');
				_putchar(mins + '0');
			}
			else
			{
				_putchar(hrs + '0');
				_putchar(':');
				_putchar(mins + '0');
			}
		}
	}
}
