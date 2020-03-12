#include <stdio.h>
int find_max(int a, int b);
int find_min(int a, int b);
int main(){
    int max = find_max(5,6);
    int min = find_min(5,6);
    printf("Max = %d, Min = %d", max, min);
    return 0;
}
int find_max(int a, int b){
    if (a > b)
        return a;
    else
        return b;
}
int find_min(int a, int b){
    if (a < b)
        return a;
    else
        return b;
}