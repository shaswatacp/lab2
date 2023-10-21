//A c program to calculate the perimeter and area of a triangle.
#include<stdio.h>
#include<math.h>
void main()
{
    int a,b,c,p,s;
    float area;
    printf("Enter three sides of a triangle: \n ");
    scanf("%d,%d,%d",&a,&b,&c);

    p=a+b+c;
    s=(a+b+c)/2;
    area=sqrt(s*(s-a)*(s-b)*(s-c));
     printf("perimeter=%d\n",p);
    printf("s=%d\n",s);
    printf("area=%f\n",area);
    return 0;
}
