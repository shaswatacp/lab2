//write a c program to enter temperature in celcius and convert it into Fahrenheit.
#include<stdio.h>
int main()
{
    float c,f;
    printf("Enter temperature in celcius:  ");
    scanf("%f",&c);
    f=9*c/5+32;
    printf("Temperature in fahrenheit:%f\n",f);
    return 0;
}
