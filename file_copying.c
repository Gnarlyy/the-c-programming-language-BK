#include <stdio.h>

main()
{
    // int c;

    // c = getchar();
    // while (c != EOF) {
    //     putchar(c);
    //     c = getchar();
    // }

    // copy input to output; 2nd version
    int d;

    while ((d = getchar()) != EOF) {
        // verify that the expression getchar() !+ EOF is 0 or 1
        // print the value of EOF
        printf("\ngetchar() != EOF is %d\n", (d != EOF));
        putchar(d);
    }
    // verify that getchar() != EOF is zero
    printf("After loop, getchar() != EOF is %d\n", (d != EOF));
    return 0;
}