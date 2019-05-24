#include<stdio.h>

int main()
{
  int d = 8;
  //standard for loop - from 0
  for (int i = 0; i <100; i++)
  {
	if (i % d == 0)
	{
	 printf ("i is %d\n", i);
	 i++;
	}
  }
}
