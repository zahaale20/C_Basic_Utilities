#include <stdio.h>

int main(int count, char *args[]) { // Parameters: number of arguments, arguments
   if (count != 3) { // If there isn't three arguments...
      fprintf(stderr, "Error: Incorrect Argument Usage. Ex: ./string_repeater 5 'Hello World'"); // report an error
      return 1; // Return 1 shows there is an error
   }

   char * endptr;
   int num = strtol(args[1], &endptr, 10); // Convert input for count (num times to print string) to an integer
   
   if(num >= 0){ // If input 'num' is non negative...
      // Use a for loop to print the inputted string a 'num' number of times
      int i;
      for(i = 0; i < num; i++){
         printf("%s\n", args[2]);
      }

      return 0;
   } else {

   }
}
