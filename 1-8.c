#include <stdio.h>

int main()
{
    int blanks, tabs, newlines;
    char c;

    blanks = 0;
    tabs = 0;
    newlines = 0;

    while ((c = getchar()) != EOF) {
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
