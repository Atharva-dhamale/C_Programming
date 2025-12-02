
//write a program which accept string from user and accept one character.
//return index of first occurence of that character

#include<stdio.h>

int FistChar(char *str,char ch)
{
    int iCnt=0;

    while(*str!='\0')
    {
        if(*str==ch)
        {
         return iCnt;   
        }
        str++;
        iCnt++;
    }
    return -1;
}
int main()
{
    char arr[20];
    char cValue;
    int iRet=0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter character to search: ");
    scanf(" %c",&cValue);

    iRet=FistChar(arr,cValue);

   printf("Character location is :%d\n",iRet);


    return 0;
}