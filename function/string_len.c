#include<stdio.h>
int get_string_length(char str[]);
int main(){
    char input[] = "C Programming";
    printf("%d", get_string_length(input));
    return 0;
}
int get_string_length(char str[]){
    int len = 0;
    while (str[len] != '\0')
    {
        len++;
    }
    return len;
}