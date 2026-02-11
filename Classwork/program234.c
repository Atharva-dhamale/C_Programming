#include<stdio.h>

void CountSpace(char Str[])
{
    int iCount=0;

    while(*Str!='\0')
    {
        if(*Str==' ')
        {
            iCount++;
        }
      
        Str++;
    }
    printf("Count of Spaces are :%d\n",iCount);
   
}
int main()
{
    char Arr[50]={'\0'};
    
    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    CountSpace(Arr);

    return 0;
}