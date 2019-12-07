#include<stdio.h>
void main()
{
    int n;
    printf("enter a number ");
    scanf("%d",&n);
    if(0<=n&&n<10)
        printf("1 digit");
    else if(n<100)
        printf("two digits");
    else if(n<1000)       // istead of (n<=1000&&n>=100)
        printf("three digits");
    else
        printf("four digits");
}
