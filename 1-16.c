#include <stdio.h>
#define MAXLINE 1000 /* maximum input line length */

/* meh copied this one */
/* getline: read a line into s, return length */

int mygetline(char s[], int line)
{
    int c, i, j;

    for(i = 0, j = 0; (c = getchar())!=EOF && c != '\n'; ++i)
    {
        if(i < line - 1)
        {
            s[j++] = c;
        }
    }
    if(c == '\n')
    {
        if(i <= line - 1)
        {
            s[j++] = c;
        }
        ++i;
    }
    s[j] = '\0';
    return i;
}

/* copy: copy 'from' into 'to'; assume to is big enough */
void copy(char to[], char from[])
{
    int i;
    i = 0;
    while ((to[i] = from[i]) != '\0')
        ++i;
}
/* print the longest input line */

int main()
{
    int len; /* current line length */
    int max; /* maximum length seen so far */
    char line[MAXLINE]; /* current input line */
    char longest[MAXLINE]; /* longest line saved here */

    max = 0;

    while ((len = mygetline(line, MAXLINE)) > 0)
        if (len > max) {
            max = len;
            copy(longest, line);
        }
    if (max > 0) /* there was a line */
        printf("Longest LINE IN THE PROGRAM is %d characters:\n%s\n", max, longest);
    return 0;
}

