#include<stdio.h>
#include<string.h>

int main(){
    char name[100];

    gets(name);
    int i;
    for (i=0; name[i] != '\0'; i++){
        if (i == 0)
        {
            printf("%c", name[i]);
            continue;
        }

        if(name[i] == ' '){
            printf("%c", name[i+1]);
        }
    }

    return 0;
}
