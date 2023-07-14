#include<stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Return: 0
 */
int main()
{
	char c = 'a';
	while( c <= 'z'){
		putchar(c);
		c++;
	}
	putchar('\n');
	return (0);
}
