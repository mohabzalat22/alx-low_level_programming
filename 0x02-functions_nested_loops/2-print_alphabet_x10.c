#include "main.h"
/**
*print_alphabet_x10 - prints alphabet letters
* ten times
*desc: The function uses loop to operate
*Return: no return
*/
void print_alphabet_x10(void)
{
int it = 0;
char letter;
while (it < 10)
{
	for (letter = 'a'; letter <= 'z'; letter++)
	{
	_putchar(letter);
	}
_putchar('\n');
it++;
}

}
