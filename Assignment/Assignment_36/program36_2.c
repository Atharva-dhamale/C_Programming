
//write a program which accept string from user and covert it in upper case

#include<stdio.h>

void struprx(char *str)
{
   while(*str!='\0')
   {
    if((*str>='a')&&(*str<='z'))
    {
        *str=*str-32;
    }
    
    str++;
   }
}
int main()
{
    char arr[20];

    printf("Enter string: ");
    scanf("%[^'\n']s",arr);

    struprx(arr);

    printf("Modified String is %s \n",arr);

    return 0;
}