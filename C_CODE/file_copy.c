#include <stdio.h>

int file_copy_v1();
int file_copy_v2();
int print_EOF();

main()
{
    file_copy_v1();
    file_copy_v2();
    print_EOF();
}

/* copy input to output; 1st version */
int file_copy_v1()
{
    int c;
    c = getchar();
    while (c != EOF) {
        putchar(c);
        c = getchar();
    }
    printf("Good by!\n");
}


/* copy input to output; 2nd version */
int file_copy_v2()
{
    int c;
    while ((c = getchar()) != EOF)
    {
        putchar(c);
    }
    printf("Good by!\n");
    return 0;
}

int print_EOF()
{
    printf("EOF = %i\n",EOF);
    return 0;
}
