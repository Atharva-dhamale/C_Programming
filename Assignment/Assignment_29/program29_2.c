
/* Accept number of rows and columns from user and Display below pattern

input : iRow=4   iCol=5

output: 2   4   6   8   10
        1   3   5   7   9
        2   4   6   8   10
        1   3   5   7   9

*/
#include<stdio.h>

void Pattern(int iRow,int iCol)
{
    int i=0;
    int j=0;
    int iEven=0;
    int iOdd=0;
    

    for(i=1;i<=iRow;i++)
    {
        for(j=1,iEven=2,iOdd=1;j<=iCol;j++)
        {
            if((i%2)==0)
            {
                printf("%d\t",iOdd);
                iOdd=iOdd+2;
            }
            else
            {
                printf("%d\t",iEven);
                iEven=iEven+2;
            }
        }
        printf("\n");
    }
        
    printf("\n");
}
int main()
{
    int iValue1=0,iValue2=0;

    printf("Enter number of rows and columns: ");
    scanf("%d%d",&iValue1,&iValue2);

    Pattern(iValue1,iValue2);

    return 0;
}