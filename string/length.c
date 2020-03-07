#include <stdio.h>
int main(){
    char str1[100] = "Today is the historic 7th march";
    int i = 0, length = 0;
    while (str1[i] != '\0')
    {
        ++length;
        ++i;
    }
    printf("The length %s is = %d", str1, length);
    return 0;
}