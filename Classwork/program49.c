//Factors of 6
#include<stdio.h>


void DisplayFactorial(int iNo)
{
    int iCnt=0;

    if(iNo<0)
    {
        iNo=-iNo;
    }

    for(iCnt=1;iCnt<iNo;iCnt++)
    {
        if((iNo*iCnt)==0)
        {
            printf("%d\n",iCnt);
        }
    }
   
}

//Time complexity : O(N)

int main()
{
    int iValue=0;

    printf("Enter number : \n");
    scanf("%d",&iValue);
    
    DisplayFactorial(iValue);

    return 0;
}