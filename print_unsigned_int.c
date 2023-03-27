#include "main.h"

/**
 * print_unumber - function that prints unsigned int
 * @vlist: arguments passed
 * @output_p: host output
 * @o_p: output position
 *
 * Description: Function that print an unsigned int
 * Return: int
 */
int print_unumber(va_list vlist, char *output_p, int o_p)
{
	long int a = 1, x = 0, y, n = 0, m = 0, aux = 4294967296;

	m = va_arg(vlist, int);
	if (m < 0)
		n = aux + m;
	else
		n = m;
	while (n / a > 9)
	{
		a = a * 10;
		x++;
	}
	for (y = 0; y <= x; y++, o_p++)
	{
		output_p[o_p] = ((n / a) + '0');
		n = n % a;
		a = a / 10;
	}
	return (o_p);
}
