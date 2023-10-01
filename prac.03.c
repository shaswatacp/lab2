//write a c program to enter length in centimeter and print it in meter and kilometer.
#include<stdio.h>
int main()
{
    float c,m,k;
    printf("Enter length in centimeter : ");
    scanf("%f",&c);
    m=c/100;
    k=c/100000;
    printf("length in meter:%f\n",m);
    printf("length in kilometer:%f\n",k);
    return 0;

}
