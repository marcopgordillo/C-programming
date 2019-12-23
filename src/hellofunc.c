#include <stdio.h>
#include <math.h>
#include "include/hellomake.h"

// double radius, area;

void myPrintHelloMake(void)
{
  printf("Hello make files!\n");
  printf("texto%cprueba\n", 2);
  return;
}

void getRadiusCircle(void)
{
  double radius, area;
  printf( "Enter radius (i.e. 10): " );
  scanf( "%lf", &radius );
  area = (M_PI * radius * radius);
  printf( "\n\nArea = %f\n", area );
  //printf( "M_PI: %f\n", M_PI );
  return;
}

void printNumbers(void)
{
  int x, y;
  for(x = 0; x < 10; x++, printf("\n"))
    for(y = 0; y < 10; y++)
      printf("%d", y);

  return;
}