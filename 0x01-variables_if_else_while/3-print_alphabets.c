#include <stdio.h>
#include <ctype.h>

int main(void)
{
  char myChar;

  for (myChar = 'a'; myChar <= 'z'; myChar++)
    {
      putchar(myChar);
    }
  for(myChar = 'A'; myChar <= 'Z'; myChar++)
    {
      putchar(myChar);
    }
  putchar('\n');
  return (0);
}
