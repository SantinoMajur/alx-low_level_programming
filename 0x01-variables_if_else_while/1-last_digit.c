#include <stdio.h>
#include <stdlib.h>
#include <time.h>
#include <string.h>

/* function last_digit to calculate the last digit of given number */
int last_digit(int num);
/* main function to print out last number of a random number */
int main(void)
{
  int n, lastDigit;
  char mystr[] = "last digit of ";

  srand(time(0));
  n = rand() - RAND_MAX / 2;
  lastDigit = last_digit(n);
    if (lastDigit > 5)
      {
	printf("%s%d is %d and is greater than 5\n", mystr, n, lastDigit);
      } else if (lastDigit == 0)
      {
	printf("%s%d is %d and is 0\n", mystr, n, lastDigit);
      } else if (lastDigit < 6 && lastDigit != 0)
      {
	printf("%s%d is %d and is less than 6 and not 0\n", mystr, n, lastDigit);
      }
    return (0);
}

int last_digit(int num)
{
  return (num % 10);
}
