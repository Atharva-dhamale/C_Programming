#include<stdio.h>


void Display(int iNo)
{
    static int iValue=1;

    if(iValue<=iNo)
    {
        printf("%d\t",iValue);
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