#include <string.h>
#include <stdio.h>
//#include <string.h>
#include "print_up.h"
int main (int argc, char ** argv)
{
 if (argc < 2) {
 fprintf (stderr, "Wrong arguments\n");
 return 1;
 }
int i;
for( i=1;i<argc;i++)
 print_up (argv[i]);
printf("\n");
 return 0;
}

