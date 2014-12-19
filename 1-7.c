#include <stdio.h>
#include <stdbool.h>

bool onesix()
{
    /* yeah... */
    return getchar() != EOF;
}

void oneseven()
{
    printf("%x\n", EOF);
    printf("%i\n", EOF);
}

int main()
{
    oneseven();
    return 0;
}
