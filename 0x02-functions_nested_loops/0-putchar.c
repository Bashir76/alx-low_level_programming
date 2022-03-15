#include <stdio.h>
/**
*Write a program that prints _putchar, followed by a new line.
*The program should return 0
*/
int main(void)
{

	char c = 'a';

	while (c <= 'z')
	{
		if (c != 'q' && c != 'e')
			putchar(c);
		c++;
	}
	putchar('\n');

	return (0);
}
