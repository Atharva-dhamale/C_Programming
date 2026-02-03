#include<stdio.h>

int CountCapital(char Str[])
{
    int iCount=0;

    while(*Str!='\0')
    {
        if((*Str>='A')&&(*Str<='Z'))
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


 

    iRet=CountCapital(Arr);

    printf("Number of Capital characters are:%d\n",iRet);

    return 0;
}