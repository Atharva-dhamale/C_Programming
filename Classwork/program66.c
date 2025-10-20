

#include<stdio.h>


int main()
{
    int iNo=0;
    int iDigit=0;

    printf("Enter number : ");
    scanf("%d",&iNo);

    printf("__________________________________\n");
    printf("Original value of iNo is : %d\n",iNo);

        while(iNo!=0)
        {
            printf("__________________________________\n");
            iDigit=iNo%10;
            printf("iDigit is : %d\n",iDigit);
            iNo=iNo/10;
            printf("iNo is : %d\n",iNo);
            printf("__________________________________\n");
        }
   

    
    return 0;
}