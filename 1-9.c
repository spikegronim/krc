#include <stdio.h>

/* woot */
int main()
{
    char c;
    int spaces = 0;
    while ((c = getchar()) != EOF) {
        if (c == ' ') {
            /* if (spaces != 1) { ... } 
               eliminate the redundant block that contains just ; 
               in fact pull this logic up so that line 9 reds
               if (c == ' ' && spaces != 1) {
               the style guidelines there is "reduce nesting in if statements if possible" */
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
