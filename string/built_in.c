#include <stdio.h>
#include <string.h>
int main(){
    char str1[100] = "Jashore";
    char str2[100] = "jashore";

    if (strcmp(str1, str2) == 0){
        printf("Strings are equal");
    }else
    {
        printf("Not equal");
    }
    

    return 0;
}