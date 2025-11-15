
//Accept N numbers from user and accept one number as NO ,return index of last occurence number

#include<stdio.h>
#include<stdlib.h>

int LastOcc(int Arr[],int iLength,int iNo)
{
    int iCnt=0;


    for(iCnt=iLength-1;iCnt>=0;iCnt--)
    {
        if(Arr[iCnt]==iNo)
        {
            return iCnt;
        }
        
    }
    
    return -1;
}

int main()
{
    int iSize=0,iRet=0,iCnt=0,iValue=0;
    int *p=NULL;

    printf("Enter number of elements: ");
    scanf("%d",&iSize);

    printf("Enter number to search: ");
    scanf("%d",&iValue);

    p=(int*)malloc(iSize*sizeof(int));

    if(p==NULL)
    {
        printf("Unable to allocate the memory ");
        return -1;
    }

    printf("Enter %d elements ",iSize);

    for(iCnt=0;iCnt<iSize;iCnt++)
    {
        printf("Enter elements %d :\n",iCnt+1);
        scanf("%d",&p[iCnt]);
    }

    iRet=LastOcc(p,iSize,iValue);

    if(iRet==-1)
    {
        printf("There is no such number");
    }
    else
    {
        printf("Last occurunce of number is %d :\n",iRet);
    }

    free(p);

    return 0;
}