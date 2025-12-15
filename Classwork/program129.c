#include<stdio.h>
#include<stdlib.h>

int countEven(int Arr[],int iSize)
{
    int iCnt=0,iCount=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {

        if((Arr[iCnt]%2)==0)
        {
            iCount++;
        }
    }
    return iCount;
}

int main()
{
    int iLength=0;
    int *ptr=NULL;
    int iCnt=0,iRet=0;

    printf("Enter number of elements: \n");
    scanf("%d",&iLength);

    ptr=(int*)malloc(iLength*sizeof(int));

    if(NULL==ptr)
    {
        printf("Unable to allocate memory");
        return -1;
    }

    printf("Enter the elements: \n");

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        scanf("%d",&ptr[iCnt]);
    }

    iRet=countEven(ptr,iLength);
    printf("Number of even elements are :%d\n",iRet);

    free(ptr);

    return 0;
}