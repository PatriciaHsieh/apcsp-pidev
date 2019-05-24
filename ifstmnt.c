#include <stdio.h>

int main()
{
  int a = 7;
  int b = 0;
  int c = 5;
  int d = 5;

  // display a and b
   printf("a is %d\nb is %d\nc is %d\nd is %d\n", a, b, c, d);

  // if statement to test if a is equal to b
  if (a == b)
  {
    printf("a is b\n");
  }
  else
  {
    printf("a is not b\n");
  }

  // if statement to test if c is not equal to d
  if (c != d)
  {
    printf("c is not d\n");
  }
  else
  {
    printf("c is d\n");
  }

  // if statement to test if a is greater than b
  if (a > b)
  {
    printf("a is greater than b\n");
  }
  else
  {
    printf("a is not greater than b\n");
  }

  // if statement to test if a is greater than or equal to c
  if (a >= c)
  {
    printf("a is greater than or equal to c\n");
  }
  else
  {
    printf("a is not greater than or equal to c\n");
  }

  // if statement to test if a AND b are equal to 0
  if (a == 0 && b==0)
  {
    printf("a AND b are equal to 0\n");
  }
  else
  {
    printf("either a or b are not equal to 0\n");
  }

  // if statement to test if a OR b is equal to 0
  if (a == 0 || b == 0)
  {
    printf("a OR b is equal to 0\n");
  }
  else
  {
    printf("a and b are both not equal to 0\n");
  }
}
