#include<stdio.h>
void swap(int *x, int *y);
int main(){
    int a = 5, b = 6;
    printf("Before, a=%d , b=%d", a, b);
    swap(&a,&b);
    printf("After, a=%d , b=%d", a, b);
    return 0;
}
void swap(int *x, int *y){
    int temp = *x;
    *x = *y;
    *y = temp;
}