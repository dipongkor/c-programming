#include<stdio.h>
int find_square(int n);
int main(){
    int n = 5;
    int square = find_square(n);
    printf("n = %d, n*n = %d", n, square);
    return 0;
}
int find_square(int n){
    n = n *n;
    return n;
}