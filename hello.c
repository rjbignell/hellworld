
#include <stdio.h>
#include "hello.h"

main(argc, argv)
int argc;
char **argv;
{
  printf("Greetings from %s\n%s", argv[1], MSG1);
}
