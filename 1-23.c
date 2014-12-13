#include <stdio.h>

#define TRUE 1
#define FALSE 0

int main()
{
    char c;
    char derp;
    int inacomment = FALSE;
    int inastring = FALSE;

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
            } else {
                putchar(c);
            }
        }
    }
}
