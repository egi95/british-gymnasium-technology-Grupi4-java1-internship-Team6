/*
   This program reads an integer and a float from the user
   and prints them formatted.
*/

#include <stdio.h>

int main() {
    int integerInput;   // Variable for integer
    float floatInput;   // Variable for float

    // Ask user to enter an integer
    printf("Enter an integer and press ENTER:\n");

    // Read integer input
    scanf("%d", &integerInput);

    // Ask user to enter a float
    printf("Enter a decimal number and press ENTER:\n");

    // Read float input
    scanf("%f", &floatInput);

    // Print results
    printf("\nYou entered:\n");
    printf("Integer: %d\n", integerInput);
    printf("Float: %.2f\n", floatInput);

    return 0;
}
