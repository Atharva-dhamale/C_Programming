
//write a recursive program which display below pattern
//  A   B   C   D   E   F

#include<stdio.h>

void Display()
{
    static char iCnt='A';

    if(iCnt<='F')
    {
        printf("%c\t",iCnt);
        iCnt++;
        Display();
    }
    
}
int main()
{
    Display();
    printf("\n");
    return 0;
}