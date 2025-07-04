#include <stdio.h>

int main() {
    int numbers[5];  // Array to store 5 integers
    int i;

    // ----------------------------------------------------------
    // 1. FOR loop to read and print all numbers in one line
    // ----------------------------------------------------------
    // We use a for loop here because the number of iterations (5) is known.
    // For loops are ideal when we have a fixed number of steps.
    printf("Enter 5 integers:\n");
    for (i = 0; i < 5; i++) {
        scanf("%d", &numbers[i]);  // Store each input in the array
    }

    printf("\nYou entered: ");
    for (i = 0; i < 5; i++) {
        printf("%d ", numbers[i]);  // Print each number on the same line
    }
    printf("\n");

    // ----------------------------------------------------------
    // 2. WHILE loop to find and print the largest number
    // ----------------------------------------------------------
    // A while loop is used when the condition controls the loop flow.
    // Here we go through each element to find the max, one by one.
    int max = numbers[0];  // Assume first element is the largest initially
    i = 1;  // Start from the second element

    while (i < 5) {
        if (numbers[i] > max) {
            max = numbers[i];  // Update max if a bigger number is found
        }
        i++;
    }

    printf("The largest number is: %d\n", max);

    // ----------------------------------------------------------
    // 3. DO-WHILE loop to calculate and print the sum of elements
    // ----------------------------------------------------------
    // Do-while is useful when we want the loop body to run at least once.
    // This ensures that even if we had only 1 element, the loop would run.
    int sum = 0;
    i = 0;

    do {
        sum += numbers[i];
        i++;
    } while (i < 5);

    printf("The sum of all numbers is: %d\n", sum);

    return 0;
}

