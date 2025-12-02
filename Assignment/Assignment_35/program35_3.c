
//write a program which accepts string from user and return difference between fequency of small characters
//and frequency of capital characters

#include<stdio.h>


int Difference(char *str)
{
    int iCnt1=0;
    int iCnt2=0;

    

    while(*str!='\0')
    {
        if((*str>='a')&&(*str<='z'))
        {
            iCnt1++;
        }
        else if((*str>='A')&&(*str<='Z'))
        {
            iCnt2++;
        }
        str++;
    }
    return iCnt1-iCnt2;
    
}

int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    iRet=Difference(arr);

    printf("%d\n",iRet);

    
    return 0;
}