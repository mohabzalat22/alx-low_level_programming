#include "main.h"
/**
*print_alphabet - function that print alphabet
*it prints in lowercase
*Return: no return
*/
void print_alphabet(void)
{
int i;
int l = 0;
	while (l < 10)
	{
	for (i = 'a'; i <= 'z'; i++)
	{
	_putchar (i);
	}
	_putchar ('\n');
	l++;
	}
}
