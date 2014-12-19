#include <stdio.h>

#define FALSE 0
#define TRUE 1

int main()
{
    char c;
    char out = FALSE;
    while ((c = getchar()) != EOF) {
        if ((c == ' ' || c == '\t') && !out) {
            putchar('\n');
            out = TRUE;
        } else if ((c == ' ' || c == '\t') && out) {
            ;
        } else if (out && c != ' ') {
            putchar(c);
            out = FALSE;
        } else {
            putchar(c);
        }
    }
    return 0;
}
