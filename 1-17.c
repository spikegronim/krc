#include <stdio.h>

/* didn't copy this one though! */

void printer(char * stufffffffff)
{
    char c;

    for (int i = 0; i < 81; i++)
        putchar(stufffffffff[i]);

    while ((c = getchar()) != '\n')
        putchar(c);
    putchar(c);
}


int main()
{
    char c, letssee[80];
    int i;

    while ((c = getchar()) != EOF)
    {
        if (c != '\n' && i < 81) {
            letssee[i] = c;
            i++;
            if (i == 81)
                printer(letssee);
        } else {
            i = 0;
        }
    }

    return 0;
}
