#include <stdio.h>

#define WIDTH 80

int main()
{
    char c;
    int i = -1;
    int abscount = 0;
    char lookahead[WIDTH];

    while ((c = getchar()) != EOF) {
        i++;
        lookahead[i] = c;
        abscount++;

        if (abscount == WIDTH) {
            if (i == WIDTH - 1) {
                /* if you wrote one line longer than width you get hyphenated */
                for (int k = 0; k <= i; k++)
                    putchar(lookahead[k]);
                putchar('-');
                putchar('\n');
                abscount = 0;
            } else {
                /* otherwise line break goes at the last space */
                putchar('\n');
                abscount = 0;
                for (int k = 0; k <= i; k++) {
                    putchar(lookahead[k]);
                    abscount++;
                }
            }
            i = -1;
        } else if (c == ' ' || c == '\t') {
            /* print last word from lookahead and reset i */
            for (int k = 0; k <= i; k++)
                putchar(lookahead[k]);
            i = -1;
        } else if (c == '\n') {
            for (int k = 0; k <= i; k++)
                putchar(lookahead[k]);

            i = -1;
            abscount = 0;
        }
    }

    return 0;
}
