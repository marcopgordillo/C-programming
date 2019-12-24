#include <stdio.h>
#include <math.h>
#include "include/hellomake.h"

#define TARGET_AGE 65

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

int calcYear(int year1);

void printYear(void)
{
  int year1, year2;
  // Ask the user for the birth year
  printf("What year was the subject born? ");
  printf("Enter as a 4-digit year (YYYY): ");
  scanf(" %d", &year1);

  // Calculate the future year and display it
  year2 = calcYear(year1);

  printf("Someone born in %d will be %d in %d.\n", year1, TARGET_AGE, year2);

  return;
}

int calcYear(int year1)
{
  return (year1 + TARGET_AGE);
}
