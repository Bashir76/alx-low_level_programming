#include <stdio.h>
/**
* main - main block
*Write a program that prints _putchar, followed by a new line.
*The program should return 0
*/
int main(void)
{
	int i;

	for (i = 0; i < 10; i++)
	{
		printf("%i", i);
	}
	putchar('\n');

	return (0);
}
