#include <stdio.h>
#include <ctype.h>
#include <string.h>

int main(void)
{
  char myChar;
  for (myChar = 'a'; myChar <= 'z'; myChar++)
    {
      if((myChar != 'q') && (myChar != 'e'))
	{
	  putchar(myChar);
	}
    }
  putchar('\n');
  return (0);
}
