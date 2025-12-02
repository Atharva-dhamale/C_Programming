
//write a program which accept string from user and display it in reverse order

#include<stdio.h>

void Reverse(char *str)
{
    char *temp=str;

    while(*str!='\0')
    {
        str++;
    }
    while(str>=temp)
    {
        printf("%c ",*str);
        str--;
    }
    printf("\n");
}
int main()
{
    char arr[20];
    int iRet=0;

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    Reverse(arr);

    return 0;
}