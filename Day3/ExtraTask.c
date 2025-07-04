#include <stdio.h>

int main() {
    float num1, num2;
    int result;

    // Ask the user to enter the first number
    printf("Enter the first number: ");
    result = scanf("%f", &num1);  // Read and validate first input

    // If input is invalid (non-number), exit with error message
    if (result != 1) {
        printf("Invalid input! Please enter a numeric value.\n");
        return 1;  // Exit program with error
    }

    // Ask the user to enter the second number
    printf("Enter the second number: ");
    result = scanf("%f", &num2);  // Read and validate second input

    // Validate second input
    if (result != 1) {
        printf("Invalid input! Please enter a numeric value.\n");
        return 1;
    }

    // Compare the two numbers using if-else statements and comparison operators
    if (num1 > num2) {
        // If first number is greater
        printf("The first number (%.2f) is greater than the second number (%.2f).\n", num1, num2);
    }
    else if (num2 > num1) {
        // If second number is greater
        printf("The second number (%.2f) is greater than the first number (%.2f).\n", num2, num1);
    }
    else {
        // If both numbers are equal
        printf("Both numbers are equal: %.2f = %.2f\n", num1, num2);
    }

    return 0;
}

