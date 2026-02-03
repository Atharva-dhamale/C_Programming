#include<stdio.h>

void CountDigits(char Str[])
{
    int iCount=0;

    while(*Str!='\0')
    {
        if((*Str>=48)&&(*Str<=57))
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