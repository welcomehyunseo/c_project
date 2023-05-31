#include <stdio.h>
#include <stdlib.h>

#define NORETURN __attribute__((__noreturn__))

void exit_program() NORETURN;

void exit_program()
{
  printf("call exit_program()\n");
  exit(EXIT_FAILURE);
}

// int main(int argc, char *argv[])
int main()
{
  printf("before\n");
  exit_program();
  printf("after\n");

  return 0;
}