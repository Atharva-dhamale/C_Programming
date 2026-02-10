#include<stdio.h>


void Display(int iNo)
{
    static char iValue='a';
    static int number=0;

    number=97+(iNo-1);

    if(iValue<=number)
    {
        printf("%c\t",iValue);
        iValue++;
        Display(iNo);
        
    }
    
}

int main()
{
    int iValue=0;

    printf("Enter number : ");
    scanf("%d",&iValue);

    Display(iValue);
    printf("\n");

    return 0;
}