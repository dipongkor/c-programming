#include<stdio.h>
void print_pyramid(int n);
int main(){
    print_pyramid(5);
    printf("\n");
    print_pyramid(6);
    printf("\n");
    print_pyramid(8);
    return 0;
}
void print_pyramid(int n){
    int i, j, k;
    for (i = 1; i <= n; i++)
    {
        //print space
        for (j = 1; j <= n-i; j++)
        {
            printf(" ");
        }
        //printf *
        for (k = 1; k<= 2*i - 1; k++)
        {
            printf("*");
        }
        printf("\n");
    }
}