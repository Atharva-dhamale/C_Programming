#include<stdio.h>

void Display(char Str[])
{
    while(*Str!='\0')
    {

    printf("%c\n",*Str);
    Str++;
    }
   
}
int main()
{
    char Arr[50]={'\0'};

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}