#include <stdio.h>
void print_fibonacci(int n);
int main(){
    int n;
    printf("Enter the number of terms: ");
    scanf("%d", &n);
    print_fibonacci(n);
    return 0;
}
void print_fibonacci(int n){
    int i, t1 = 0, t2 = 1, nextTerm;
    for (i = 1; i <= n; ++i) {
        printf("%d, ", t1);
        nextTerm = t1 + t2;
        t1 = t2;
        t2 = nextTerm;
    }
}