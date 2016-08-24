#include<stdio.h>
#include<stdlib.h>
#include<string.h>
#include<unistd.h>

int main()
{
  char text[64];

  printf("Child Process ID %d\n", getpid());

  if( fgets(text, sizeof(text)-1,stdin)==NULL )
    printf("Error Reading stdin\n");

  printf("Child Process Reading '%s'\n", text);
  printf("Child Process Stopping\n");

  return 1;
}
