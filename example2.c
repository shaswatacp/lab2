//A c program to find maximum between two numbers using conditional operator.
#include<stdio.h>
int main()
{
    int a,b,max;
    printf("Enter two numbers:  ");
    scanf("%d %d",&a,&b);
    max=  (a>b)?(printf("max=%d",a)):(printf("max=%d",b));
    return 0;
}
