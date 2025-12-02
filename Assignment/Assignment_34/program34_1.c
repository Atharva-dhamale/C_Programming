
//write a program which displays ASCII table. Table contains symbol,Decimal,hexadecimal and octal representation
//of every member from 0 to 255.

#include<stdio.h>


void DisplayASCII()
{
    int iCnt=0;

    printf("Symbol  Hexadecimal Octal\n");

    for(iCnt=0;iCnt<=255;iCnt++)
    {
        printf("%c\t%X\t%o\n",iCnt,iCnt,iCnt);
    }
}

int main()
{

    DisplayASCII();

    
    return 0;
}