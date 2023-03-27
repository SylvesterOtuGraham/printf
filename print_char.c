#include "main.h"

/**
 * print_char - prints a character to std output
 * @vlist: arguments passed
 * @output_p: Host output
 * @o_p: output position
 *
 * Description: Function that print a character
 * Return: int
 */
int print_char(va_list vlist, char *output_p, int o_p)
{
	output_p[o_p] = va_arg(vlist, int);
	return (++o_p);
}
