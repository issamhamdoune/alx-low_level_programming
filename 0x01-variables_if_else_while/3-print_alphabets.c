#include<stdio.h>

/**
 * main - Entry point
 *
 * Description: print alphabet in lowercase then in uppercase
 *
 * return: Always 0 (success)
*/

int main(void)
{
	char ch = 'a';
	char CH = 'A';
	/*prints a - z*/
	while (ch <= 'z')
	{
		putchar(ch);
		ch++;
	}

	/*print A - Z*/
	while (CH <= 'Z')
	{
		putchr(CH);
		CH++;
	}
	putchar('\n');
	return (0);
}
