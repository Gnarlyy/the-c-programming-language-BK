#include <stdio.h>

int main()
{
    /* ex. 1.8 counting blanks, tabs, and newlines*/
    
    int c, b, t, nl;
    b = 0;
    t = 0;
    nl = 0;
    
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            ++b;
        }
        if (c == '\t') {
            ++t;
        }
        if (c == '\n') {
            ++nl;
        }

    }

    printf("Total blanks: %d\n", b);
    printf("Total tabs: %d\n", t);
    printf("Total lines: %d\n", nl);

}