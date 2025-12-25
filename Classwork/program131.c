#include<stdio.h>
#include<stdlib.h>

float Avg(int Arr[],int iSize)
{
    int iCnt=0,iSum=0;

    for(iCnt=0;iCnt<iSize;iCnt++)
    {

        if((Arr[iCnt]%2)!=0)
        {
            iSum+=Arr[iCnt];
        }
        
    }
    return iSum/iSize;
}

int main()
{
    int iLength=0;
    int *ptr=NULL;
    int iCnt=0;
    float fRet=0.0f;

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

    fRet=Avg(ptr,iLength);
    printf("Average of N numbers are :%f\n",fRet);

    free(ptr);

    return 0;
}