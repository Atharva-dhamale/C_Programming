#include<stdio.h>

void CountAll(char Str[])
{
    int iCountSmall=0;
    int iCountCapital=0;

    while(*Str!='\0')
    {
        if((*Str>='A')&&(*Str<='Z'))
        {
            iCountCapital++;
        }
        else if((*Str>='a')&&(*Str<='z'))
        {
            iCountSmall++;
        }
        Str++;
    }
    printf("Small letters are:%d\n",iCountSmall);
    printf("Capital letters are:%d\n",iCountCapital);
}
int main()
{
    char Arr[50]={'\0'};
    
    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    CountAll(Arr);

    return 0;
}