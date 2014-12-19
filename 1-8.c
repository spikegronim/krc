#include <stdio.h>

int main()
{
    int blanks, tabs, newlines;
    char c;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF) {
        /* never omit braces on if! google "goto fail" for details: https://gist.github.com/hongrich/9176925#file-gistfile1-diff-L60 */
        /* you can also do this with a switch/case - I bet GCC generates the same assembler for both, why don't you check my thinking? */
        if (c == '\n')
            ++newlines;
        if (c == '\t')
            ++tabs;
        if (c == ' ')
            ++blanks;
    }

    printf("Newlines: %d\nTabs: %d\nBlanks: %d\n", newlines, tabs, blanks);

    return 0;
}
