#include <stdio.h>
int main()
{
    char pattern[5] = "*****";
    int i, w = 5, p = 5;
    for (i = 0; i < 5; i++)
    {
        printf("%*.*s\n", w, p, pattern);
        --p;
    }
    return 0;
}