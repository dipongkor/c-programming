#include <stdio.h>
#include <string.h>
struct student
{
    int age;
    char name[100];
    char department[100];
    float total_marks;
};

union book
{
    int id;
    char name[100];
    char isbn[100];
    char author[100];
    int total_pages;
};

int main()
{
    struct student s1, s2, s3;
    gets(s1.name);
    gets(s1.department);
    scanf("%d", &s1.age);
    scanf("%f", &s1.total_marks);

    printf("%s", s1.name);
    
    printf("%s", s1.department);
    puts(s1.department);

    printf("%d", s1.age);
    printf("%f", s1.total_marks);
    struct student students[1000];
    int i;
    for (i = 0; i < 1000; i++)
    {
        gets(students[i].name);
        gets(students[i].department);
        scanf("%d", &students[i].age);
        scanf("%f", &students[i].total_marks);
    }
    return 0;
}