#include <stdio.h>

int main() {
    int grade;

    // Ask the user to enter a grade between 0 and 100
    printf("Enter the student's grade (0–100): ");
    scanf("%d", &grade);

    // Check if the grade is within the valid range
    if (grade < 0 || grade > 100) {
        printf("Invalid grade! Please enter a value between 0 and 100.\n");
    }
    // If grade is between 90 and 100 , it's Excellent
    else if (grade >= 90) {
        printf("Classification: Excellent\n");
    }
    // If grade is between 70 and 89 , it's Good
    else if (grade >= 70) {
        printf("Classification: Good\n");
    }
    // If grade is between 50 and 69 , it's Average
    else if (grade >= 50) {
        printf("Classification: Average\n");
    }
    // Any grade below 50 is a Fail
    else {
        printf("Classification: Fail\n");
    }

    return 0;
}

