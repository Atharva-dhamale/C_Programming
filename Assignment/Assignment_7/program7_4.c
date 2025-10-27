
//Write a program which accept number from user and print all odd numbers upto number

#include<stdio.h>

void OddDisplay(int iNo)
{
    int i=0;

    for(i=1;i<=iNo;i++)
    {
        if((i%2)!=0)
        {
            printf("%d ",i);
        }
        
    }
}
int main()
{
    int iValue=0;
    printf("Enter number :");
    scanf("%d",&iValue);

    OddDisplay(iValue);
    printf("\n");

    return 0;
}