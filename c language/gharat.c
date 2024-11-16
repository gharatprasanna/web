#include<stdio.h>
# define max(a,b)(((a)>(b)) ?(a):(b))
int main()
{
    int x=10,y=20;
    printf("maximum of %d and %d is %d ",x,y,max(x,y));
    return 0;
}