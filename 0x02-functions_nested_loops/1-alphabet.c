#include <stdlib.h>
#include <unistd.h>
#include "main.h"
/**
 * main - carries all the code in this file
 * @print_alphabet: prints all alphabets in small letters
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
