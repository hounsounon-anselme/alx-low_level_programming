#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print all aplhabet letters except q and e
 *
 * Return: Always 0 (Success)
*/

int main(void)
{
	char cha = 'a';

	while (cha <= 'z')
	{
		if (cha == 'e' || cha == 'q')
			++cha;
		putchar(cha);
		++cha;
	}
	putchar('\n');

	return (0);
}
