
#include <stdio.h>
#include "hello.h"

main(argc, argv)
int argc;
char **argv;
{
  printf("Felicitations from %s\n%s\n", argv[1], MSG1);
}
