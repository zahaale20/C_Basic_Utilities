#include <stdio.h>

void function_one(int input) {
   int function_one_local = input;
}

int main(int count, char *args[]) { // Parameters: (number of times to print args, string that doesn't exceed one line)
   if (count != 3) {
      fprintf(stderr, "Error: Incorrect Argument Usage. Ex: ./string_repeater 5 'Hello World'");
   }

}
