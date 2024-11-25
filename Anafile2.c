#include<stdio.h>
int main()
{
    int n1, n2, sum, prod, diff;
    printf("Enter two numbers:");
    scanf("%d%d",&n1,&n2);
    sum=n1+n2;
    prod=n1*n2;
    diff=n1-n2;
    printf("\nSum of two number:%d",sum);
    printf("\nProduct of two numbers:%d",prod);
    printf("\nDifference of two numbers:%d",diff);
    return 0;
}