#include<stdio.h>
/**
 * main - main block
 * Return: 0
 */
int main(void)
{
char c = 'a';

while (c <= 'z')
{
	if (c == 'q' || c =='e')
	{
		continue;
	}
	putchar(c);
	c++;
}
return (0);
}
