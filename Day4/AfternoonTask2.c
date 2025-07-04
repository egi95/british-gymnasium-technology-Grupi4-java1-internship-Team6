#include <stdio.h>

int main() {
    int numbers[10];  // Array to store 10 numbers
    int sum = 0;
    float average;

    // --------------------------------------------------
    // 1. Read 10 numbers from the user and store in array
    // --------------------------------------------------
    // Arrays allow storing multiple values under one name
    // Loops make it easy to process them one by one
    printf("Enter 10 numbers:\n");
    for (int i = 0; i < 10; i++) {
        printf("Number %d: ", i + 1);
        scanf("%d", &numbers[i]);
        sum += numbers[i];  // add to sum for average calculation
    }

    // --------------------------------------------------
    // 2. Print the numbers in reverse order
    // --------------------------------------------------
    printf("\nNumbers in reverse order:\n");
    for (int i = 9; i >= 0; i--) {
        printf("%d ", numbers[i]);
    }
    printf("\n");

    // --------------------------------------------------
    // 3. Calculate the average using a for loop
    // --------------------------------------------------
    average = (float)sum / 10;
    printf("\nAverage of the numbers: %.2f\n", average);

    // --------------------------------------------------
    // 4. Display numbers greater than the average
    // --------------------------------------------------
    printf("\nNumbers greater than the average:\n");
    for (int i = 0; i < 10; i++) {
        if (numbers[i] > average) {
            printf("%d ", numbers[i]);
        }
    }
    printf("\n");

    return 0;
}

