#include <stdio.h>
/* #include <ctype.h> */
/* lulz YOCO */

#define FALSE 0
#define TRUE 1

void printer(int *lengths)
{
    int i;
    for (i = 0; i < 31; i++) {
            printf("%5i : ", i);
        for (int inde = 0; inde < lengths[i]; inde++)
        {
           putchar('#');
        }
        putchar('\n');
    }
}

int isspace(char c)
{
    switch (c)
    case ' '  :
    case '\t' :
    case '\n' :
    case '\v' :
    case '\f' :
    case '\r' : return TRUE;
    return FALSE;
}

int main()
{
    int lengths[30];

    for (int i = 0; i < 31; ++i)
    {
        lengths[i] = 0;
    }

    char c;
    int in;

    int count = 0;
    while ((c = getchar()) != EOF) {
        if (isspace(c))
        {
            if (count != 0)
                lengths[count]++;
            in = FALSE;
            count = 0;
        } else {
            in = TRUE;
            count++;
        }
    }

    printer(lengths);
    return 0;
}
