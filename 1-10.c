#include <stdio.h>

int main()
{
    char c;
    while ((c = getchar()) != EOF) {
        if (c == '\t')
            printf("%c%c", '\\','t');
        else if (c == '\\')
            printf("%c%c",'\\','\\');
        /* else if (c == 'backspace? wtf') */
        /*     printf("%c%c",'\\','t'); */
        else
            putchar(c);
    }
    return 0;
}
