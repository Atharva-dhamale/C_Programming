
//write a recursive program which accept string from user and count number of characters
//  Input :Hello
//  Output : 5

#include<stdio.h>

int Strlen(char brr[])
{
    static int iCnt=0;

    if(brr[iCnt]!='\0')
    {
        iCnt++;

        Strlen(brr);
    }
    return iCnt;

}
int main()
{
    int iRet=0;
    char arr[20];

    printf("Enter string :");
    scanf("%[^'\n']s",arr);

    iRet=Strlen(arr);
    printf("%d\n",iRet);
    return 0;
}