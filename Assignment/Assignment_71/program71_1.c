#include<stdio.h>


int WhiteSpace(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        str++;
        if(*str==' ')
        {
            iCnt++;
        }

        WhiteSpace(str);
    }
    return iCnt;
    
}

int main()
{
    char Arr[20]={'\0'};
    int iRet=0;

    printf("Enter string : ");
    scanf("%[^\n]s",Arr);

    iRet=WhiteSpace(Arr);

    printf("Count of white spaces is : %d\n",iRet);

    return 0;
}