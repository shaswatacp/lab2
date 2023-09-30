//write a c program to enter radius of a circle and find diameter,circumference and area .
#include<stdio.h>
int main()
{
    int r;
    float diameter,circumference,area;
    printf("Enter radius of a circle:  ");
    scanf("%d",&r);

    diameter=2*r;
    circumference=2*3.1416*r;
    area=3.1416*r*r;

    printf("Diameter=%f\n",diameter);
    printf("Circumference=%f\n",circumference);
    printf("Area=%f\n",area);
    }
