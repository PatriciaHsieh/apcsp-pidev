#include <stdio.h>

float areaofcircle (float r, float a)
{
  a = r * r * 3.14;
  return a;
}

int main(void) 
{
 char input[256];
 float lower;
 float upper;
 printf("What is the lower value of your range for the radius?\n");
 while(1)
{
	fgets(input, 256, stdin);
	if (sscanf(input, "%f", &lower) == 1) break;
	printf("Not a valid value, please try again\n");
}
printf("What is the upper value of your range for the radius?\n");
while (1)
{
	fgets(input, 256, stdin);
	if (sscanf(input, "%f", &upper) == 1) break;
	printf("Not a valid value, please try again\n");
}

//call area of circle
float r;
float a;
for (r = lower; r <= upper; r++)
{
	a = areaofcircle(r, a);
  printf("The area is %f\n", a);
}
}
