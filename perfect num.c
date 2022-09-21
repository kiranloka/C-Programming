#include<stdio.h>
void main()
{
int num,rem,sum,i;
printf("Enter a number/n");
scanf("%d",&num);
for(i=1;i<num;i++)
{
    rem=num%i;
    if(rem==0)
    {
        sum=sum+i;
    }
if(sum==num)
printf("%d the given number is a perfect number");
else
printf("\n%d the given number is not a perfect number");
}
}

