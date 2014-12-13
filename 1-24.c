#include <stdio.h>

#define TRUE 1
#define FALSE 0

#define PAREN 0
#define BRACKET 2
#define TUBORG 1
#define ANGLED 3

int inacomment = FALSE;
int inastring = FALSE;

int tracker[4];
char c;
char derp;


int main ()
{
    /* things to look out for
       { }
       [ ]
       ( )
       < >
       these are different:
       " "
       ' '                    */


    while((c = getchar()) != EOF)
    {
        /* if (c == '"') */
        /*     inastring = (inastring) ? FALSE : TRUE ; */

        /* if (c == '/' &&  (derp = getchar()) == '*') */
        /*     if (!inastring) */
        /*         inacomment = TRUE; */

        /* if (c == '*' &&  (derp = getchar()) == '/' && !inastring) */
        /*     inacomment = FALSE; */

        if (c == '(')
            tracker[PAREN]++;
        else if (c == ')')
            tracker[PAREN]--;

        else if (c == '[')
            tracker[BRACKET]++;
        else if (c == ']')
            tracker[BRACKET]--;

        else if (c == '{')
            tracker[TUBORG]++;
        else if (c == '}')
            tracker[TUBORG]--;

        else if (c == '<')
            tracker[ANGLED]++;
        else if (c == '>')
            tracker[ANGLED]--;
        /* else if (c == '\n') { */
        /*     printf("Parens: %i\nBrackets: %i\nTuborgs: %i\nAngles: %i\n", */
        /*             tracker[PAREN], */
        /*             tracker[BRACKET], */
        /*             tracker[TUBORG], */
        /*             tracker[ANGLED]); */
        /* } */

    }

    printf("Parens: %i\nBrackets: %i\nTuborgs: %i\nAngles: %i\n",
            tracker[PAREN],
            tracker[BRACKET],
            tracker[TUBORG],
            tracker[ANGLED]);

    return 0;

}
