#include <stdio.h>

#define TABWIDTH 8

/* entab */
int main()
{
    int loc = 0;
    int count = 0;
    char c;

    while ((c = getchar()) != EOF) {
        if (c == '\n') {
            putchar(c);
            loc = 0;
        } else if (c == '\t') {
            count +=  (TABWIDTH - (loc % TABWIDTH));
            loc +=  (TABWIDTH - (loc % TABWIDTH));
        } else if (c == ' ') {
            count++;
            loc++;
        } else {
            if (count != 0) {
                for (int i = 0; i < count; i++)
                    putchar(' ');
                count = 0;
            }
            putchar(c);
            loc++;
        }
    }
    return 0;
}
