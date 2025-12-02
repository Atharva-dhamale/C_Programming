
//write a program which accept string from user and accept one character.
//check whether that character is present in string or not 

#include<stdio.h>
#include<stdbool.h>

bool ChkChar(char *str,char ch)
{

    while(*str!='\0')
    {
        if(*str==ch)
        {
            return true;
        }
        str++;
    }
}
int main()
{
    char arr[20];
    char cValue;
    bool bRet=false;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    printf("Enter character to search: ");
    scanf(" %c",&cValue);

    bRet=ChkChar(arr,cValue);

    if(bRet==true)
    {
        printf("Character found\n");
    }
    else
    {
        printf("Character not found\n");
    }


    return 0;
}