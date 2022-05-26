#include<stdio.h>
#include<string.h>
int main(){
    char name[100];
    scanf("%s", name);
    gets(name);

    printf("Your name is: %s", name);
    puts(name);
    return 0;
}
