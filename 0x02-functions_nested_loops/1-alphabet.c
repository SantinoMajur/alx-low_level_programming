#include "main.h"
/**
 * print_alphabet - print alphabets in lower case
 * Return: void
 */

void print_alphabet(void)
{
  char myChar;

  for (myChar = 'a'; myChar <= 'z'; myChar++)
    {
      putchar(myChar);
    }
  putchar('\n');

}
