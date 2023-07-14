#include <stdio.h>
#include <stdlib.h>
/**
 * main - main block
 * Description: prints all single digit numbers of base 10
 * starting from 0, followed by a new line.
 * Return: 0
 */
int main(void)
{
	char c = '0';

	while (c <= '9')
	{
		putchar(c);

		if (c == '9')
		{
			/*non*/
		}
		else
		{
		putchar(',');
		putchar(' ');
		}
	c++;	
	}
	putchar('\n');
	return (0);
}
