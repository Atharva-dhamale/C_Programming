#include<stdio.h>
#include<stdlib.h>

int main()
{
    int iLength=0;
    int iCnt=0;
    int *iPtr=NULL;

    printf("Enter the number of elements: \n");
    scanf("%d",&iLength);

    iPtr=(int*)malloc(iLength*sizeof(int));         //Step 1: Allocate the memory

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
    //Call to the function which contains Business logic
    //Fun(iPtr,iLength);


    //Step 3: Free the memory
    free(iPtr);

    return 0;
}