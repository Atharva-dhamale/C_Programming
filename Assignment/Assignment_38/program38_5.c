
//write a program which accept string from user and copy that characters
//of that string into another string by toggling the case

#include<stdio.h>


void StrCpyToggle(char *src,char *dest)
{
    int iLength = 0;
   
    while(*src != '\0')
    {
       if((*src>='A')&&(*src<='Z'))
       {
        
        *dest=*src+32;
       }
       else if((*src>='a')&&(*src<='z'))
       {
        
        *dest=*src-32;
       }
       else
       {
        *dest=*src;
       }
       src++;
       dest++;
       
    }

    *dest = '\0';
}
int main()
{
    char arr[30]="Marvellous Python 2";
    char brr[30];

    
    StrCpyToggle(arr,brr);

    printf("%s\n",brr);


    return 0;
}