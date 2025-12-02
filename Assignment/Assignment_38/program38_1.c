
//write a program which accept string from user and copy character of that string in reverse order

#include<stdio.h>


void StrCpyRev(char *src,char *dest)
{
    int iLength = 0;
   
    while(*src != '\0')
    {
        iLength++;
        src++;
    }
    src--; 

    
    while(iLength > 0)
    {
        *dest = *src;
        dest++;       
        src--;      
        iLength--;    
    }

    
    *dest = '\0';
}
int main()
{
    char arr[30]="Marvellous Python";
    char brr[30];

    
    StrCpyRev(arr,brr);

    printf("%s\n",brr);


    return 0;
}