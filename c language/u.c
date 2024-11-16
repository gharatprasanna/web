#include<stdio.h>
void sum()
{
    int a,b,sum;
    printf("enter value of a and b");
    scanf("%d%d",&a,&b);
    sum=a+b;
    printf("%d",sum);
    return 0;
}
void main()
{
    sum();
}