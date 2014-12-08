#include <stdio.h>

void reverse(char * string)
{
    int k;
    for (int i = 0; string[i] != '\0'; i++)
        k = i;
    for (int j = k; j > -1 ; j--)
        printf("%c", string[j]);
    putchar('\n');
}


int main()
{
    char c, letssee[80];
    int i = 0;

    while ((c = getchar()) != EOF)
    {
        if (c == '\n' && i == 0) {
            putchar(c);
        } else if (c == '\n' && i > 0) {
            letssee[i] = '\0';
            reverse(letssee);
            i = 0;
        } else {
            letssee[i] = c;
            i++;
        }
    }
    return 0;
}
