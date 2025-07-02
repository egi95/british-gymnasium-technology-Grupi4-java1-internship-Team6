/* 
   This program prints my initials (N K) inside a decorative box
   using escape characters like \n and \t.
*/

#include <stdio.h>  // Include standard input/output header

int main() {
    // Print top border of the box
    printf("\n*****************\n");
    
    // Print first line with initials, centered
    printf("*    N    K    *\n");
    
    // Print second line (can be left empty or decorative)
    printf("*               *\n");
    
    // Print third line with initials again
    printf("*    N    K    *\n");
    
    // Print bottom border of the box
    printf("*****************\n");
    
    return 0; // Indicate successful execution
}

