#include <stdio.h>
#include <stdbool.h>

void oneone()
{
    /* herro world */
    printf("hello world\n");
}

void onetwo()
{
    /* there are different things that can be escaped */
    printf("hello\
            wocrld\n\n\n");
}

/* 1-3 */
void ftoc()
{
    int fahr, celsius;
    int lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    fahr = lower;
    printf("F to C TEMPERATURES\n=================\n");
    while (fahr <= upper) {
        celsius = 5 * (fahr-32) / 9;
        printf("%d\t%d\n", fahr, celsius);
        fahr = fahr + step;
    }
    printf("=================\n");
}

/* 1-4 */
void ctof()
{
    int cels, fahrenheit;
    int lower, upper, step;
    lower = 0; /* lower limit of temperature scale */
    upper = 300; /* upper limit */
    step = 20; /* step size */
    cels = lower;
    printf("C TO F TEMPERATURES\n=================\n");
    while (cels <= upper) {
        fahrenheit = (cels * (9/5)) + 32;
        printf("%d\t%d\n", cels, fahrenheit);
        cels = cels + step;
    }
    printf("=================\n\n\n\n");
}

/* 1-5 */
void onefive()
{
    int fahr;
    for (fahr = 300; fahr >= 0; fahr = fahr - 20)
        printf("%3d %6.1f\n", fahr, (5.0/9.0)*(fahr-32));
}

bool onesix()
{
    return getchar() != EOF;
}

void oneseven()
{
    printf("%x\n", EOF);
    printf("%i\n", EOF);
}

void oneeight()
{
    int blanks, tabs, newlines;
    char c;
    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF)
        if (c == '\n')
            ++newlines;
        if (c == '\t')
            ++tabs;
        if (c == '\b')
            ++blanks;

    printf("Newlines: %d\nTabs: %d\nBlanks: %d", newlines, tabs, blanks);
}

/* woot */
void onenine()
{
    char c;
    int spaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            if (spaces == 1) {
                ;
            } else {
                spaces = 1;
                printf(" ");
            }
        } else {
            spaces = 0;
            printf("%c", c);
        }
    }
}

void oneten()
{
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("%c%c", '\\','t');
        else if (c == '\\')
            printf("%c%c",'\\','\\');
        /* else if (c == 'backspace? wtf') */
        /*     printf("%c%c",'\\','t'); */
        else
            putchar(c);
    }
}

void oneeleven()
{
    /* running a bunch of stuff through it */
    /* something with a lot of characters in it. */
}

void onetwelve()
{
    char c;
    char out = false;
    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\t') && !out) {
            putchar('\n');
            out = true;
        } else if ((c == ' ' || c == '\t') && out) {
            ;
        } else if (out && c != ' ') {
            putchar(c);
            out = false;
        } else {
            putchar(c);
        }
    }
}

void onefourteen()
{
    int lengths[126], c;

    for (int i = 0; i < 127; i++)
        lengths[i] = 0;

    while ((c = getchar()) != EOF)
        lengths[(int)c]++;

    for (int i = 32; i < 127; i++)
        printf("%4c : %i\n", i, lengths[i]);
}

int main()
{
    /* oneone(); */
    /* onetwo(); */
    /* ftoc(); */
    /* ctof(); */
    /* onefive(); */
    /* printf("%i", onesix()); */
    /* oneseven(); */
    /* oneeight(); */
    /* onenine(); */
    /* oneten(); */
    /* onetwelve(); */
    /* onefourteen(); */
    return 0;
}
