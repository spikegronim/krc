#include <stdio.h>

int main()
{
    int lengths[126], c;

    for (int i = 0; i < 127; i++)
        lengths[i] = 0;

    while ((c = getchar()) != EOF)
        lengths[(int)c]++;

    for (int i = 32; i < 127; i++)
        printf("%4c : %i\n", i, lengths[i]);

    return 0;
}

