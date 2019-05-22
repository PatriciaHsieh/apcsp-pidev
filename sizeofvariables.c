#include<stdio.h>

int main()
{
  int a = 545;
  float b = 3.1415;
  char c = 'q';
  double d = 1892.80365;

  // print size of main types of variables
  printf("Var a has a size of %d bytes\nVar b has a size of %d bytes\nVar c has a size of %d\nVar d has a size of %d\n", sizeof(a), sizeof(b), sizeof(c), sizeof(d));
}

