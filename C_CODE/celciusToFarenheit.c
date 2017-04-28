#include <stdio.h>

/* print Fahrenheit-Celsius table 
 * for fahr = -, 20, ..., 300; floating-point version */

float fahr_to_cels( float cels );

main()
{
    float fahr, celsius;
    int lower, upper, step;
    lower = 0;    /* lower limimt of temperature table */
    upper = 300;  /* upper limit */
    step  = 10;   /* step size */

    fahr = upper;
    printf("Fahr -> Celc -> Fahr\n");
    while (fahr >= lower) 
    {
        celsius = (5.0/9.0) * (fahr-32.0);
        printf("%3.0f %9.1f %7.1f\n", fahr, celsius, fahr_to_cels(celsius));
        fahr = fahr - step;
    }
}

float fahr_to_cels( float cels )
{
    float fahr;
    return(fahr = (9.0/5.0 * cels) + 32.0);
}
