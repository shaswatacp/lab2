#include<stdio.h>
int main()
{
    int a;
    printf("Enter an integer: \n");
    scanf("%d",&a);
    (a%2==0)?printf("even=%d",a):printf("odd=%d",a);
    return 0;
}
