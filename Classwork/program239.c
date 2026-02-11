#include<stdio.h>

void strtoggleX(char Str[])
{
    

    while(*Str!='\0')
    {
        if((*Str>='a')&&(*Str<='z'))
        {
            *Str=*Str-32;
        }
        else if((*Str>='A')&&(*Str<='Z'))
        {
            *Str=*Str+32;
        }
      
        Str++;
    }

   
}
int main()
{
    char Arr[50]={'\0'};
    
    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    strtoggleX(Arr);

    printf("Updated String is :%s\n",Arr);

    return 0;
}