#include<stdio.h>

void Display(char *Str)
{
    printf("%c\n",*Str);
    Str++;
    printf("%c\n",*Str);
    Str++;
    printf("%c\n",*Str);
    Str++;
}
int main()
{
    char Arr[50]={'\0'};

    printf("Enter String:");
    scanf("%[^'\n']s",Arr);

    Display(Arr);

    return 0;
}