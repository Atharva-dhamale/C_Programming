
//write a recursive program which display below pattern
//  Input :6
//  Output : a  b   c   d   e

#include<stdio.h>

void Display(int iNo)
{
    static char iCnt='a';

    if(iCnt<('a'+iNo))
    {
        printf("%c\t",iCnt);
        iCnt++;
        Display(iNo);
    }
    
}
int main()
{
    int iValue=0;

    printf("Enter number :");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");
    return 0;
}