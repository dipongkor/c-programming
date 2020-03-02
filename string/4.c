#include<stdio.h>
#include<string.h>
int main(){
    //%[flag][min width][precision]
    char country[] = "Bangladesh";
    printf("%20s\n", country);
    printf("%5s\n", country);
    printf("%5.4s\n", country);
    printf("%-5.4s\n", country);
    printf("%5.0s\n", country);
    printf("%.4s\n", country);
    printf("%*.*s", 6,5, country);
    return 0;
}