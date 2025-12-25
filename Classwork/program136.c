#include<stdio.h>
#include<stdlib.h>

typedef int *IPTR;

int FrequencyCalculate(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    int iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            iCount++;
        }
    }
    return iCount;
}
int main()
{
    int iLength=0;
    int iCnt=0;
    int iRet=0;
    int iValue=0;
    IPTR iPtr=NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&iLength);

    iPtr=(IPTR)malloc(iLength*sizeof(int));         //Step 1: Allocate the memory

    if(NULL==iPtr)
    {
        printf("Unable to allcate the memory");
        return -1;
    }

    printf("Enter the values:\n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&iPtr[iCnt]);
    }

    printf("Enter the number to calculate Frequency");
    scanf("%d",&iValue);

    //Step 2: Use the Memory
    iRet=FrequencyCalculate(iPtr,iLength,iValue);

    printf("Frequency of the element %d is :%d\n ",iValue,iRet);


    //Step 3: Free the memory
    free(iPtr);

    return 0;
}