#include<stdio.h>
int find_gcd(int n1, int n2);
int find_gcd_while_loop(int n1, int n2);
int main(){
    printf("%d", find_gcd_while_loop(366, 60));
    return 0;
}
int find_gcd_while_loop(int n1, int n2){
    int temp;
    while (n2 != 0)
    {
        temp = n2;
        n2 = n1 % n2;
        n1 = temp;
    }
    return n1;
}
int find_gcd(int n1, int n2){
    if (n2 != 0)
        find_gcd(n2, n1 % n2);
    else 
        return n1;
}