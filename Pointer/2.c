#include <stdio.h>
int main()
{
    int *pc, c;
    c = 5;
    pc = &c;
    // printf("%u\n", pc);
    // printf("%u\n", &c);
    printf("%d", *pc);

    *pc = 1;
    printf("%d", c);
    
    return 0;
}