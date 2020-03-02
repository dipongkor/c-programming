#include<stdio.h>
int main(){
    char input[100];
    int i = 0, total_vowel = 0, total_consonant = 0;
    printf("Enter the input: ");
    scanf("%s", input);
    while (input[i] != '\0')
    {
        if(input[i] == 'a' || input[i] == 'A' ||
           input[i] == 'e' || input[i] == 'E' ||
           input[i] == 'i' || input[i] == 'I' ||
           input[i] == 'o' || input[i] == 'O' ||
           input[i] == 'u' || input[i] == 'U')
           {
               ++total_vowel;
           }
           else
           {
               ++total_consonant;
           }
           ++i;
    }
    printf("Total vowels = %d, Total consonants = %d", total_vowel, total_consonant);
    return 0;
}
