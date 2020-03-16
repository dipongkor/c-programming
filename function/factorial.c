#include<stdio.h>
int find_factorial(int n);
int get_factorial(int n);
int main(){
    int fact = find_factorial(5);
    printf("%d\n", fact);
    printf("%d\n", get_factorial(5));
    return 0;
}
int find_factorial(int n){
    int i;
    int factorial = 1;
    for (i=1; i<=n; i++){
        factorial = factorial * i;
    }
    return factorial;
}
int get_factorial(int n){
    if (n == 0)
        return 1;
    return n * get_factorial(n - 1);
}