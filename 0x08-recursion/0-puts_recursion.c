#include "main.h"
/*
 *FUNCTION THAT PRINTS A STRING FOLLOWED BY A NEW LINE
 @S:string
 *
 *
 *
 */
void _puts_recursion(char *s)
{
	if (*s)
	{
		_putchar(*s);
		_puts_recursion(s + 1);

	}
	else
	_putchar('\n');
}
