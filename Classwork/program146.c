#include<stdio.h>
#include<stdlib.h>


typedef int *IPTR;

//Time complexity: >O(N)

int Maximum(int Arr[],int iSize)
{
    int iMax=0;
    int iCnt=0;

    
    
    for(iMax=Arr[0],iCnt=0;iCnt<iSize;iCnt++)
    {
        if(Arr[iCnt]>iMax)
        {
            iMax=Arr[iCnt];
        }
    }
    return iMax;
}

int main()
{
    int iLength=0;
    int iCnt=0;
    int iRet=0;
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

    

    //Step 2: Use the Memory
    iRet=Maximum(iPtr,iLength);

    printf("Maximum number is: %d\n",iRet);
    


    //Step 3: Free the memory
    free(iPtr);

    return 0;
}