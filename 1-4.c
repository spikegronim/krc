#include <stdio.h>

int main()
{
    double cels, fahrenheit;
    int lower, upper, step;
    lower = 0.0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    cels = lower;
    printf("C TO F TEMPERATURES\n=================\n");
    while (cels <= upper) {
        fahrenheit = (cels * (9.0/5.0)) + 32;
        printf("%f\t%3f\n", cels, fahrenheit);
        cels = cels + step;
    }
    printf("=================\n\n\n\n");

    return 0;
}
