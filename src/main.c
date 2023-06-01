#include <stdio.h>
#include <stdlib.h>

#define NORETURN __attribute__((__noreturn__))

void call_error() NORETURN;

void call_error() 
{
  printf("there are something error\n");
  exit(EXIT_FAILURE);
  // return;
}

int main()
{
  printf("before\n");
  call_error();
  printf("after\n");

  return 0;
}