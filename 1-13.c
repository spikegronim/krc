#include <stdio.h>
#include <stdbool.h>

int main()
{
    int lengths[50];

    char c;
    char in = false;

    int count_word = 0;

    int i;
    for (i = 0; i < 50; ++i)
        lengths[i] = 0;

    while ((c = getchar()) != EOF) {
        if (c != ' ' && c != '\t')
            in = true;

        if (in)
            count_word++;

        if (!in) {
            lengths[count_word]++;
            count_word = 0;
        }

    }

    return 0;
}
