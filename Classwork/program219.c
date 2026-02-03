#include<stdio.h>

int Count(char Str[])
{
    int iCount=0;

    while(*Str!='\0')
    {
        if(*Str=='A')
        {
            iCount++;
        }
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

    iRet=Count(Arr);

    printf("Count of 'A' is:%d\n",iRet);

    return 0;
}