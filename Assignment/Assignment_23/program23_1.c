
//Accept N numbers from user and  accept one another number as NO ,check whether NO is present or not

#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>

bool Check(int Arr[],int iLength,int iValue)
{
    int iCnt=0;
    int iFrequency=0;
    bool bFlag=false;

    for(iCnt=0;iCnt<iLength;iCnt++)
    {
        if(Arr[iCnt]==iValue)
        {
            bFlag=true;
            break;
        }
    }
    return bFlag;
}

int main()
{
    int iSize=0,iCnt=0,iValue=0;
    int *p=NULL;
    bool bRet=false;

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

    bRet=Check(p,iSize,iValue);

    if(bRet==true)
    {
        printf("Number is present\n");
    }
    else
    {
        printf("Number is absent\n");
    }

    free(p);

    return 0;
}