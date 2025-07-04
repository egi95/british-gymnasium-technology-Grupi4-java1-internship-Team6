#include <stdio.h>

int main() {
    int number;

    // Ask the user to enter a number
    printf("Enter an integer: ");
    scanf("%d", &number);

    // Check if the number is positive
    if (number > 0) {
        printf("The number is positive.\n");
    }
    // Check if the number is exactly zero
    else if (number == 0) {
        printf("The number is zero.\n");
    }
    // If it's not positive or zero, then it must be negative
    else {
        printf("The number is negative.\n");
    }

    return 0;
}


