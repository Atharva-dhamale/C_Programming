
//Check positive ,negative,or zero

#include<stdio.h>

void CheckNumberType(int num)
{
    if(num>0)
    {
        printf("%d is positive number\n",num);
    }
    else if(num<0)
    {
        printf("%d is negative number\n",num);
    }
    else
    {
        printf("It is zero\n");
    }
}
int main()
{
    int number=0;
    printf("Enter number :");
    scanf("%d",&number);

    CheckNumberType(number);

    return 0;
}