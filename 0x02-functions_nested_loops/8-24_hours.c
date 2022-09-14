#include "main.h"
/**
* jack_bauer - function that prints minute of the day of Jack Bauer
* starting from 00:00 to 23:59
* Return: 0
*/
void jack_bauer(void)
{
int hour = 0;
int minute = 0;
int hours_remainder;
int mins_remainder;

while (hour <= 23)
{
while (minute <= 59)
{
av
hours_remainder = hours % 10;
_putchar(hour / 10 + '0');
_putchar(hours_remainder + '0');
_putchar(':');
_putchar(minute / 10 + '0');
_putchar(mins_remainder + '0');
minute++;
_putchar('\n');
}
hour++;
minute = 0;
}
}
