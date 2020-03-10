#include<stdio.h>
int main(){
    while (1)
    {
        printf("Infinite\n");
    }
    
    for (; ;)
    {
        printf("Infinite\n");
    }

    do
    {
        printf("Infinite\n");
    } while (1);
    
    return 0;
}