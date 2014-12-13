#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    char c;
    char derp;
    int inacomment = FALSE;
    int inastring = FALSE;

    /* is it going to work? */

    /* is it going to work?
       on multi-line strings, why yes it did!    */

    /* is it going to work on char constants? */
    char test = '/';
    /* woooooot */

    while((c = getchar()) != EOF) {
        if (c == '"')
          inastring = (inastring) ? FALSE : TRUE ;

        if (inacomment) {
            if (c == '*' &&  (derp = getchar()) == '/' && !inastring)
                inacomment = FALSE;
        } else {
            if (c == '/' &&  (derp = getchar()) == '*') {
                if (inastring) {
                    putchar(c);
                    putchar(derp);
                } else {
                inacomment = TRUE;
                }
            } else if (derp == '\047'){
                putchar(c);
                putchar('\047');
                derp = 0;
            } else {
                putchar(c);
            }
        }
    }
}
