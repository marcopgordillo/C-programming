#include <stdio.h>
#include <string.h>

int main(void)
{
  char buffer[256];

  printf("Enter your name and press <Enter>:\n");
  scanf( "%[^\n]%*c", buffer );
  printf("\nYour name has %lu characteres and spaces!\n", strlen(buffer));
  return 0;
}