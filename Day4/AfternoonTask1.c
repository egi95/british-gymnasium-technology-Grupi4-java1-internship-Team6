#include <stdio.h>

int main() {

    // -----------------------------------------------
    // 1. FOR LOOP: Print numbers from 1 to 10
    // ------------------------------------------------
    // A 'for' loop is ideal when the number of repetitions is known
    printf("Numbers from 1 to 10:\n");
    for (int i = 1; i <= 10; i++) {
        printf("%d ", i);
    }
    printf("\n\n");

    // ------------------------------------------------
    // 2. WHILE LOOP: Print even numbers from 2 to 20
    // ------------------------------------------------
    // A 'while' loop is good when we want to keep repeating a task
    // as long as a condition is true, like printing even numbers
    printf("Even numbers from 2 to 20:\n");
    int j = 2;
    while (j <= 20) {
        printf("%d ", j);
        j += 2;  // move to the next even number
    }
    printf("\n\n");

    // -----------------------------------------------------
    // 3. DO-WHILE LOOP: Print "Hello, world!" five times
    // -----------------------------------------------------
    // A 'do-while' loop guarantees at least one run.
    // We want to print something 5 times, so do-while is perfect.
    printf("Printing 'Hello, world!' 5 times:\n");
    int count = 1;
    do {
        printf("Hello, world! (%d)\n", count);
        count++;
    } while (count <= 5);

    return 0;
}

