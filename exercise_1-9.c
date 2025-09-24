#include <stdio.h>

int main()
{
    /* write a program to copy its input to its output
       replacing each string of one or more blanks by a single blank */

    int c;
    int in_space = 0; // initialize the in_space flag

    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (in_space == 0) { // first space in a sequence
                putchar(' ');
                in_space = 1; // acknowledge the space sequence
            }
        } else {
            putchar(c); // output non-space characters
            in_space = 0; // reset in_space to 0
        }
    }
}