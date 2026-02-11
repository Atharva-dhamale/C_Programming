#include<stdio.h>

void Change(char Str[])
{
    

    while(*Str!='\0')
    {
        if((*Str>='a')&&(*Str<='z'))
        {
            *Str='_';
        }
      
        Str++;
    }

   
}
int main()
{
    char Arr[50]={'\0'};
    
    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    Change(Arr);

    printf("Updated String is :%s\n",Arr);

    return 0;
}