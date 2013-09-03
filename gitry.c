#include <stdio.h>

int main(int argc, char *argv[])
{ int i;

  printf("Trying out GIT\n");
  for (i=0; i<argc; i++)
    printf("%d\t%s\n",i,argv[i]);
 
}
