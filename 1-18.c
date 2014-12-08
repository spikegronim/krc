#include <stdio.h>

int isspace(char c)
{
    switch (c)
    case ' '  :
    case '\t' :
    case '\v' :
    case '\f' : return 1;
    return 0;
}

int main()
{
    char c, letssee[80];
    int i = 0;

    while ((c = getchar()) != EOF)
    {
        if (isspace(c)) {
            letssee[i] = c;
            i++;
        } else if (c == '\n' || c == '\r') {
            putchar(c);
            i = 0;
        } else {
            for (int p = 0; p < i; p++)
                putchar(letssee[p]);
            putchar(c);
            i = 0;
        }
    }

    return 0;
}
