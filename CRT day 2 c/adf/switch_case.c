#include<stdio.h>
void main()
{
    int a,b,c;
    printf("enter teo numbers ");
    scanf("%d%d",&a,&b);
    printf("\n enter the corresponding operation");
    printf("\n 1-+,2- -, 3-/, 4-*");
    scanf("%d",&c);
    switch(c)
    {
        case 1: printf(a+b); break;
        case 2: printf(a-b);break;
        case 3: printf(a/b);break;
        case 4: printf(a*b);break;
        default : printf("invalid");

    }


}
