
#include<stdio.h>
void Display(int iNo)
{
    int iCnt=0;

    
    for(iCnt=2;iCnt<=iNo;iCnt=iCnt+2)
    {
        printf("%d\t",iCnt);
    }
}

int main()
{
    int iValue=0;

    printf("Enter frequency :");
    scanf("%d",&iValue);

    Display(iValue);
    return 0;
}