#include<stdio.h>

int CountOccurence(char Str[],char ch)
{
    int iCount=0;

    while(*Str!='\0')
    {
        if(*Str==ch)
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
    char cValue='\0';

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    fflush(stdin);                      //Not applicable on all OS

    printf("Enter the character:");
    scanf(" %c\n",&cValue);

    iRet=CountOccurence(Arr,cValue);

    printf("Number of Occurences are:%d\n",iRet);

    return 0;
}