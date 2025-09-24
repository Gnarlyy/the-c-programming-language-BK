#include <stdio.h>

int main()
{
    /* counting characters with a while loop */
    // long nc;

    // nc = 0;
    // while (getchar() != EOF)
    //     ++nc;
    // printf("%ld\n", nc);
    
    /* counting new lines with a while loop 
       for this example to work comment out the previous loop
       for both to work I'll have to create a 
       single while loop with logic from both */
    int c, nl;

    nl = 0;
    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++nl;
        printf("%d\n", nl);

    /* count character in input; V2 */
    // double nc;

    // for (nc = 0; getchar() != EOF; ++nc)
    //     ;
    // printf("%.0f\n", nc);
}