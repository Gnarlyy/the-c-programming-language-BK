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

    // creating the same program with a for loop
    /* changes made to print in reverse order:
       fahr_for changed to max number of 300
       comparison changed to greater than or equal to zero
       and increment changed to subtraction (fahr_for - 20) */

    printf("\n Fahrenheit to Celsius Table with a For loop\n");
    int fahr_for;

    for (fahr_for = 300; fahr_for >= 0; fahr_for = fahr_for - 20)
        printf("%3d %6.1f\n", fahr_for, (5.0/9.0)*(fahr_for-32));

    /* symbolic constants:
       #define name - for example:
       #define  LOWER   0
       #define  UPPER   300
       #define  STEP    20
       this creates a readily distinguished
       name from lower case variable names */


}

