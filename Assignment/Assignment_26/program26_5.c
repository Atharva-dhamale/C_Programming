
// Accept number from user and Display below pattern

//input : 8
//output 2 4 6 8 10 12 14 16

#include<stdio.h>

void Pattern(int iNo)
{
    int iCnt=0;
    int iEven=0;

    for(iCnt=1,iEven=2;iCnt<=iNo;iCnt++)
    {
        printf("%d\t",iEven);
        iEven=iEven+2;
    }
    printf("\n");
}
int main()
{
    int iValue=0;

    printf("Enter number number of elemnts: ");
    scanf("%d",&iValue);

    Pattern(iValue);

    return 0;
}