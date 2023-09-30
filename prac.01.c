#include<stdio.h>
int main()
{
    int l,b,p,area;
    printf("Enter length of the rectangle: \n ");
    scanf("%d",&l);
    printf("Enter breadth of the rectangle:\n  ");
    scanf("%d",&b);
    area=l*b;
    p=2*(l+b);
    printf("Area=%d\n",area);
    printf("perimeter=%d\n",p);
    return 0;
}
