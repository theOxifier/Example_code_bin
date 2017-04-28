#include <stdio.h>

/* count characters in input; 1st version */
void count_char_v1();
void count_char_v2();
main()
{
    count_char_v1();
    count_char_v2();
}

void count_char_v1()
{
    long nc;

    nc = 0;
    while(getchar() != EOF)
        ++nc;
    printf("%ld\n", nc);
}

void count_char_v2()
{
    double nc;

    for (nc = 0; getchar() != EOF; ++nc);
    printf("%.0f\n", nc);
}
