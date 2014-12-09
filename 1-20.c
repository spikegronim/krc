#include <stdio.h>

#define TABWIDTH 4

int main()
{
    char c;
    int count = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\t') {
            for(int i = count; i < TABWIDTH; i++)
                putchar(' ');
             count = 0;
        } else {
            putchar(c);
            count++;
            if (count == TABWIDTH)
                count = 0;
        }
    }
    return 0;
}
