/*
  Euler Problem #1: 
  If we list all the natural numbers below 10 that are multiples of 3 or 5, we get 3, 5, 6 and 9. The sum of these multiples is 23. 
  Find the sum of all the multiples of 3 or 5 below 1000.
*/

#include <stdio.h>

int main()
{
  int sum = 0;
  int number = 3;
  int multiplier = 1;
  while (number * multiplier < 1000)
    {
      sum += number * multiplier;
      multiplier ++;
    }

  number = 5;
  multiplier = 1;

  while (number * multiplier < 1000)
    {
      sum += number * multiplier;
      multiplier ++;
    }

  printf("Sum of all multiples of 3 and 5 less than 1000: %d\n", sum);
  
}
