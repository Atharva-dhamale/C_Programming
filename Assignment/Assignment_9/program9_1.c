
//Write a program which accept number from user and display below pattern

#include<stdio.h>

void Display(int iNo)
{
    int i=0;
    int j=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }
    for(i=1;i<=iNo;i++)
    {
        printf("* ");
    }
    for(j=1;j<=iNo;j++)
    {
        printf("# ");
    }
}
int main()
{
    int iValue=0;
    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");

    return 0;
}