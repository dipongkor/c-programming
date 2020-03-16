#include<stdio.h>
int xyz(int n);
int main(){
    int n = 5, k = 10;
    int square = xyz(n);
    printf("n = %d, n*n = %d", n, square);
    return 0;
}

int xyz(int n){
    n = n *n;
    return n;
}