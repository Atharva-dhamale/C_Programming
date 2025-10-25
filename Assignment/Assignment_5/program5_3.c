
//Check leap year

#include<stdio.h>

void CheckLeapYear(int year)
{
    if(((year%400)==0)||((year%4)==0)&&(((year%100)!=0)))
    {
        printf("%d is a leap year\n",year);
    }
    else
    {
        printf("%d is not a leap year\n",year);
    }
}
int main()
{
    int yr;
    printf("Enter year :");
    scanf("%d",&yr);

    CheckLeapYear(yr);

    return 0;
}