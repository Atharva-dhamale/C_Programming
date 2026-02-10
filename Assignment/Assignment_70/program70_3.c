#include<stdio.h>


int Strlen(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        str++;
        iCnt++;

        Strlen(str);
    }
    return iCnt;
    
}

int main()
{
    char Arr[20]={'\0'};
    int iRet=0;

    printf("Enter string : ");
    scanf("%[^\n]s",Arr);

    iRet=Strlen(Arr);

    printf("Characters count is : %d\n",iRet);

    return 0;
}