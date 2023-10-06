//Write a c program to find maximum between three numbers using conditional operator.

#include<stdio.h>
int main()
{
    int a,b,c,max;
    printf("Enter three numbers:  ");
    scanf("%d%d%d",&a,&b,&c);
    max=(a>b)?(a>c?a:c):(b>c?b:c);
    printf("max=%d\n",max);
    return 0;
}
