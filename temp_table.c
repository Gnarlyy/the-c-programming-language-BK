#include <stdio.h>

/* print Fahrenheit-Celsius table
   for fahr - 0, 20, ..., 300  */

main()
{
    // declare variables as int data type
    // int fahr, celsius;
    // accurately represent celsius with floating point numbers
    float fahr, celsius;
    int lower, upper, step;

    // assign variables to an int value
    lower = 0;
    upper = 300;
    step = 20;

    printf("Fahrenheit to Celsius Table\n");

    fahr = lower;
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        // update for floating point numbers:
        celsius = (5.0/9.0) * (fahr-32.0);
        /* format the numbers to be right justified using this form:
           prinf("%3d %6d\n") rather than a tab \t*/
        printf("%3.0f %6.1f\n", fahr, celsius);
        fahr = fahr + step;
    }
}