//write a c program to check whether a year is leap year or not by conditional operator.
#include<stdio.h>
int main()
{
    int year;
    printf("Enter any year:  \n");
    scanf("%d",&year);
    ((year%4==0&&year%100!=0)||(year%400==0))?printf("year is leap year"):printf("year is not leap year");
    return 0;
}
