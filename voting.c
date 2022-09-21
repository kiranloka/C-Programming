#include<stdio.h>
int main()
{
    int age;
    printf("Enter your age: ");
    scanf("%d",&age);
    int clean_stdin();
{
    while (getchar()!='\n');
    printf("INVALID");
}
    if(age<0)
    {
        printf("age cannot be negative");
    }
    else if ((age<18))
    {
        age=18-age;
    printf("after %d years");
    }
    
    else if (age>=18)
    {
        printf(" You are eligible to vote");
    }
    
    
    
}
