/*
1.20 LAB*: Program: ASCII art
This zyLab activity is the traditional programming assignment, typically requiring a few hours over a week. The previous sections provide warm up exercises intended to help a student prepare for this programming assignment.



(1) Output this tree. (2 pts)

   *
  ***
 *****
*******
  ***

(2) Below the tree (with two blank lines), output this cat. (3 pts)

/\   /\
  o o
 =   =
  ---

CS 149 Section 2 Operating Systems
Nitisuk Tatiyasuntorn
Professor William "Bill" Andreopoulos
*/

#include <stdio.h>

int main(void) {
    // Draw tree
    printf("   *\n");
    printf("  ***\n");
    printf(" *****\n");
    printf("*******\n");
    printf("  ***\n\n\n");

    // Draw cat
    printf("/\\   /\\\n");
    printf("  o o\n");
    printf(" =   =\n");
    printf("  ---\n");

    return 0;
}