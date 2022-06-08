#include "main.h"
/**
 * main - check the code
 *
 * Return: always 0
 */
int main(void)
{
	int r;

	r = _isalpha('H');
	putchar(r + '0');
	r = _isalpha('o');
	putchar(r + '0');
	return (0);
}
