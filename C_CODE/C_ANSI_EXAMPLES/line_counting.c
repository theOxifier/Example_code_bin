#include <stdio.h>

/* count lines in input */
void line_counting();
void remove_extra_spaces();

main()
{
    printf("Remove extra spaces test\n");
    remove_extra_spaces();
    printf("Line counting test\n");
    line_counting();
}

void remove_extra_spaces()
{
    int c;
    int extra_space = 0;
    while((c = getchar()) != EOF)
    {
        if( extra_space == 0 && c == ' ' )
        {
            ++extra_space;
            putchar(c);
        }
        else if( extra_space > 0 && c == ' ' ) 
            ++extra_space;
        else
        {
            putchar(c);
            extra_space = 0;
        }
    }
    printf("GOOD DAY\n");
}
            

void line_counting()
{
    int c,nl;

    nl = 0;
    /* counts new line, tabs, and spaces */
    while ((c = getchar()) != EOF)
        if ( c == '\n'|| c == '\t' || c == ' ' )
            ++nl;
    printf("\nThere are %d spaces, tabs, and newlines from the input\n", nl);
}
