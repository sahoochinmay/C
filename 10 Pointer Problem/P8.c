//Command Line Arguement
#include <stdio.h>

void main( int argc, char *argv[] )  {
       printf("Program Name Is: %s\n",argv[0]);
       printf("No. of arguement present is %d\n",argc);
   if( argc == 2 ) {
      printf("The argument supplied is %s\n", argv[1]);
   }
   else if( argc > 2 ) {
      printf("Too many arguments supplied.\n");
   }
   else {
      printf("One argument expected.\n");
   }

}