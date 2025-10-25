
//Find maximum of two numbers

#include<stdio.h>

int FindMax(int a,int b)
{
    if(a>b)
    {
        return a;
    }
    else
    {
        return b;
    }
}
int main()
{
    int num1=0,num2=0,result=0;

    printf("Enter two numbers :");
    scanf("%d %d",&num1,&num2);

    result=FindMax(num1,num2);
    printf("Maximum is:%d\n",result);

    return 0;
}