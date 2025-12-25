#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

typedef int *IPTR;

//Time complexity: >O(N)

bool LinearSearch(int Arr[],int iSize,int iNo)
{
    int iCnt=0;
    bool bFlag=false;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]==iNo)
        {
            bFlag=true;
            break;
        }
    }
    
    return(bFlag);
}
int main()
{
    int iLength=0;
    int iCnt=0;
    int iValue=0;
    bool bRet=false;
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

    printf("Enter the number to Search Frequency :");
    scanf("%d",&iValue);

    //Step 2: Use the Memory
    bRet=LinearSearch(iPtr,iLength,iValue);

    if(bRet==true)
    {
        printf("%d is present in the data\n",iValue);
    }
    else
    {
        printf("%d is not present in the data\n",iValue);
    }


    //Step 3: Free the memory
    free(iPtr);

    return 0;
}