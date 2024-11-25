#include<stdio.h>
int main()
{
    int a,b,c, smallest, greatest;
    printf("Input three number:");
    scanf("%d%d%d",&a,&b,&c);
    if(a<b&&a<c)
    smallest=a;
    else if(b<c)
    smallest=b;
    else
    smallest=c;

    if(a>b&&a>c)
    greatest=a;
    else if(b>c)
    greatest=b;
    else
    greatest=c;

    printf("Smallest number is:%d",smallest);
    printf("Greatest number is:%d",greatest);
    return 0;
}