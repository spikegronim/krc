#include <stdio.h>

int main()
{

    char c;
    int i = 0;
    char * lookahead[80];

    while ((c = getchar()) != EOF) {
        if (i == 81 || c == '\n') {
            i = 0;
            putchar('\n');
        }
        putchar(c);
        i++;
    }

    return 0;
}
