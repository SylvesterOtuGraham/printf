#include "main.h"

/**
 * print_numbers - prints integer to std output
 * @output_p: Host output
 * @o_p: output position
 * @n: int
 *
 * Description: Function that print a char
 * Return: int
 */

int print_numbers(int n, char *output_p, int o_p)
{
	int x = 1, y = 0, z;

	if (n < 0)
	{
		output_p[o_p] = '-';
		o_p++;
	}
	while (n / x > 9 || n / x < -9)
	{
		x = x * 10;
		y++;
	}
	for (z = 0; z <= y; z++)
	{
		if (n < 0)
		{
			output_p[o_p] = (-(n / x) + '0');
		}
		else
		{
			output_p[o_p] = ((n / x) + '0');
		}
		o_p++;
		n = n % x;
		x = x / 10;
	}
	return (o_p);
}
/**
 * print_int - responds to %d
 * @vlist: arguments passed
 * @output_p: Host output
 * @o_p: output position
 *
 * Return: int
 */

int print_int(va_list vlist, char *output_p, int o_p)
{
	return (print_numbers(va_arg(vlist, int), output_p, o_p));
}
/**
 * print_single_int - responds to %i
 * @vlist: arguments passed to print
 * @output_p: Host output
 * @o_p: output position
 *
 * Return: int
 */

int print_single_int(va_list vlist, char *output_p, int o_p)
{
	return (print_numbers(va_arg(vlist, int), output_p, o_p));
}
