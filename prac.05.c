//write a c program to convert days into years,months,weeks,and days.
#include<stdio.h>
int main()
{
    int days,months,weeks,years;
    printf("enter number of days: \n");
    scanf("%d",&days);
    years=days/365;
    days=days-(years*365);
   months=days/30;
    days=days-(months*30);
    weeks=days/7;
    days=days-(weeks*7);
    printf("%d,%d,%d,%d",years,months,weeks,days);
    return 0;
}
