
//Check even or odd

#include<stdio.h>

void CheckEvenOdd(int num)
{
    if((num%2)==0)
    {
        printf("The number is even");
    }
    else
    {
        printf("The number is odd");
    }
}
int main()
{
    int number=0;

    printf("Enter number :");
    scanf("%d",&number);

    CheckEvenOdd(number);

    return 0;
}