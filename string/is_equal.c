#include <stdio.h>
int main()
{
    char str1[100] = "Today is the historic 7th march";
    char str2[100] = "Today is the historic 7th march";

    //Str1 Length
    int str_1_length = 0;
    while (str1[str_1_length] != '\0')
    {
        ++str_1_length;
    }
    //Str2 Length
    int str_2_length = 0;
    while (str2[str_2_length] != '\0')
    {
        ++str_2_length;
    }

    if (str_1_length > str_2_length)
    {
        printf("Str1 is bigger than Str2");
    }
    else if (str_2_length > str_1_length)
    {
        printf("Str2 is bigger than Str1");
    }
    else
    {
        int i = 0, is_equal = 1;
        while (i < str_1_length)
        {
            if (str1[i] != str2[i]){
                is_equal = 0;
                break;
            }
            ++i;
        }
        if(is_equal == 1){
            printf("Str1 and Str2 are equal");
        }
        else
        {
            printf("Str1 and Str2 are not equal");
        }
    }
    return 0;
}