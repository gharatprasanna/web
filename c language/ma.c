#include<stdio.h>
int main()
{
    int n;
    printf("\n enter value of n");
    scanf("%d",&n);
    switch(n){
        case 0:printf("zero");break;
        case 1: printf("one");break;
        case 2: printf("two");break;
        case 3 : printf("three");break;
        case 4: printf("four");break;
        case 5: printf("five");break;
        default :printf("enter proper choice");

    }
    return 0;
}