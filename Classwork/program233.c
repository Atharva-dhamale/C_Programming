#include<stdio.h>

void CountDigits(char Str[])
{
    int iCount=0;

    while(*Str!='\0')
    {
        if((*Str>='0')&&(*Str<='9'))
        {
            iCount++;
        }
      
        Str++;
    }
    printf("Number of digits:%d\n",iCount);
   
}
int main()
{
    char Arr[50]={'\0'};
    
    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    CountDigits(Arr);

    return 0;
}