#include <stdio.h>
/**
 * main - Entry point
 *
 * return: Always 0 (success)
 */

/* betty style doc for function main goes there */
int main(void)
{
	/* variable declarations */
	char c;

	int d;

	c = 'a';
	d = 0;
	while
		(d < 10) {
			putchar(d + '0');
			d++;
		}
	while
		(c <= 'f') {
			putchar(c);
			c++;
		}
	putchar('\n');
	return (0);
}
