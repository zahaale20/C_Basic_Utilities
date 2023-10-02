#include <stdio.h>

// Celsius to fahrenheit conversion function
// celsius * 1.8 = fahrenheit – 32
double celsius_to_fahrenheit(double celsius) {
    return celsius * 1.8 + 32;
}

// Printing weather statements
void display_weather_statement(double fahrenheit) {
    printf("Weather Statement: ");

    if (fahrenheit >= 100) {
        printf("Warning: Heat Wave!\n");

    } else if (fahrenheit >= 80) {
        printf("Hot\n");

    } else if (fahrenheit >= 41) {
        printf("Normal\n");

    } else if (fahrenheit >= 10) {
        printf("Cold\n");
        
    } else {
        printf("Extremely Cold!\n");
    }
}

int main(void) {
    // Declaring variables we need to perform the calculation
    double celsius;
    double fahrenheit;

    // User input
    printf("Enter a value in Celsius: ");
    if (scanf("%lf", &celsius) != 1) { // Scan for a double value, check if it is a double, that 1 == 1, and store it at the address of celsius,
        fprintf(stderr, "Invalid input. Please enter a number.\n"); // Use fprintf to print error message for having an invalid input
        return 1;
    }
    
    // Perform conversion
    fahrenheit = celsius_to_fahrenheit(celsius);

    // Print statements
    printf("Equivalent in Fahrenheit: %.2f\n", fahrenheit); // Print fahrenheit as a double to 2 decimal places
    display_weather_statement(fahrenheit);
    
    return 0;
}

// Possible errors or vulnerabilities
// 1. User input - The way I scan user input doesn't take into consideration the alphabet or other symbols
// 2. Unit type - This program assumes user input for celsius can be any number. I decided to use double data type instead of the
// float data type since it has more storage. It may be better to use a float since it costs less in regards to memory usage.
// For reference, Float: (4 bytes, 7 decimals of precision) and Double: (8 bytes, 15 decimals of precision)