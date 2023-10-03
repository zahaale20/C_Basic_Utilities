#include <stdio.h>

int main(int count, char *args[]) { // Parameters: number of arguments, arguments
   if (count != 3) { // if there isn't three arguments...
      fprintf(stderr, "Error: Incorrect Argument Usage. Ex: ./string_repeater 5 'Hello World'"); // report an error
      return 1; // return 1 shows there is an error
   }

   printf("count: %s\n", args[1]);
   printf("string: %s\n", args[2]);

   char * endptr;
   int num = strtol(args[2], &endptr, 10);
   
   int i;
   for(i = 0; i < num; i++){
      printf("%s\n", args[2]);
   }

   return 0;
}
