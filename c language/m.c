#include<stdio.h>
int main(){
    int a[5],i;
    int *q=a;
printf("enter an elements of array");
for(i=0;i<5;i++){
scanf("%d",&q[i]);
}

for(i=0;i<5;i++)
{
    printf(" elements of an array=%d\n",(*q+i));
}
printf("adress of pointer q=%x",q);
return 0;
}