#include<stdio.h>

int strlenX(char Str[])
{
    int iCount=0;

    while(*Str!='\0')
    {

    iCount++;
    Str++;
    }
   return iCount;
}
int main()
{
    char Arr[50]={'\0'};
    int iRet=0;

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    iRet=strlenX(Arr);

    printf("String length is:%d\n",iRet);

    return 0;
}