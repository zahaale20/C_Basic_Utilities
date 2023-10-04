#include <stdio.h>
#include <string.h>

void printFunction(int count, char* string) {
   // Use a for loop to print the inputted string a 'count' number of times
   int i;
   for(i = 0; i < count; i++){
      printf("%s\n", string);
   }
}

int containsNewLine(char *string) {
   // Iterate through each character of the inputted string, checking to see if there is a newline character
   int j;
   for(j = 0; j < strlen(string); j++){
      if(string[j] == '\n'){
         return 1; // Return true (1) if there is a newline character in the string
      }
   }
   return 0; // Return false (0) if there isn't a new line char in the string
}

int main(int argc, char* args[]) { // Parameters: count of arguments, array of pointers to command line arguments
   if (argc != 3) { // If there isn't three arguments...
      printf("Error: Incorrect Argument Usage. Ex: ./string_repeater 5 'Hello World'\n"); // report an error
      return 1; // Return 1 shows there is an error
   }

   char* endptr; // Used to check if we reach \0
   int num = strtol(args[1], &endptr, 10); // Convert input for count (num times to print string) to an integer
   
   if(num >= 0 && *endptr == '\0'){ // If input 'num' is non-negative and endptr was able to reach the end of the string...
      if (containsNewLine(args[2]) == 0){ // Check to see if inputted string has any new lines
         printFunction(num, args[2]); // Print Function to print a string a 'num' number of times
         return 0; // return 0
      } else {
            printf("Error: Second argument shouldn't contain a newline character.\n");
      }
   } else { // Print an error message if the first argument is non-negative or not a valid numbe
      printf("Error: First Argument must be a non-negative number.\n");
   }
}

// Used ChatGPT to learn how to iterate through a string in C. I ended up discovering the string.h that declares and allows me
// to use strlen to find the length of a string.