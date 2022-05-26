#include<stdio.h>
int main(){
    int a = 5 ;
    printf("%u\n",&a);

    float array[5];
    int i;
    for(i=0;i<5;i++){
        printf("%u\n", &array[i]);
    }
    return 0;
}