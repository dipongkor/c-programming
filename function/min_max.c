#include <stdio.h>
int find_max(int a, int b);
int find_min(int a, int b);
int main(){
    int x, y;
    scanf("%d%d", &x, &y);

    int max = find_max(x,y);
    int min = find_min(x,y);
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