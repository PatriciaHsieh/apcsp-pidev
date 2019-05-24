#include<stdio.h>

int main()
{
  int a = -545;
  float b = 3.1415;
  char c = 'q';
  double d = 1892.80365;
  short int e = 2;
  unsigned int f = 10;

  // print size of main types of variables
  printf("int %d has a size of %d bytes\n", a, sizeof(a));
  printf("float %f has a size of %d bytes\n", b, sizeof(b));
  printf("char %c has a size of %d bytes\n", c, sizeof(c));
  printf("double %lf has a size of %d bytes\n", d, sizeof(d));
  printf("short int %hd has a size of %d bytes\n", e, sizeof(e));
  printf("unsigned int %u has a size of %d bytes\n", f, sizeof(f));

}

