#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 *
 *
 */
void print_alphabet(void)
{
	char d = 97 ;
	
	while (d <= 122)
	{
		_putchar(d);
		d++;
	}
	_putchar('\n');
	
}
