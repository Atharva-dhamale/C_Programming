#include<stdio.h>

int CountVowels(char Str[])
{
    int iCount=0;

    while(*Str!='\0')
    {
        if((*Str=='a')||(*Str=='e')||(*Str=='i')||(*Str=='o')||(*Str=='u'))
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

    iRet=CountVowels(Arr);

    printf("Count of Vowels is:%d\n",iRet);

    return 0;
}