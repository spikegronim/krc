#include <stdio.h>

/* woot */
int main()
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
    return 0;
}
