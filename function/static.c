#include <stdio.h>
void static_example(int i);
void non_static_example(int i);
int main(){
    int i;
    for(i=0; i<4; i++)
        static_example(i);
    return 0;
}
void non_static_example(int i){
    int x = 0;
    x += i;
    printf("%d\n", x);
}
void static_example(int i){
    static int x = 0;
    x += i;
    printf("%d\n", x);
}