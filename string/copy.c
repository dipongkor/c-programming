#include <stdio.h>
int main(){
    char str1[31] = "Today is the historic 7th march";
    char str2[31];
    int i = 0;
    while (str1[i] != '\0')
    {
        str2[i] = str1[i];
        ++i;
    }
    str2[i] = '\0'; 
    printf("%s", str2);
    return 0;
}