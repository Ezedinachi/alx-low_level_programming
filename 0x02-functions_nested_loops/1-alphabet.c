#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * print_alphabet - Entry point
 */
void print_alphabet(void)
{
	char d = 97;

	while (d <= 122)
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
}
