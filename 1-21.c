#include <stdio.h>

#define TABWIDTH 8

/* entab */
int main()
{
    int loc = 0;
    int count = 0;
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\t') {
            count += TABWIDTH - loc;
            loc += TABWIDTH - loc;
        } else if (c == ' ') {
            count++;
            loc++;
        } else {
            if (count != 0) {
                for (int i = 0; i < (count); i++)
                    putchar(' ');
                count = 0;
            }
            putchar(c);
        }
        loc++;
        if (loc == TABWIDTH )
            loc = 0;
    }
    return 0;
}
