#include<stdio.h>


int Small(char *str)
{
    static int iCnt=0;

    if(*str!='\0')
    {
        str++;
        if((*str>='a')&&(*str<='z'))
        {
            iCnt++;
        }

        Small(str);
    }
    return iCnt;
    
}

int main()
{
    char Arr[20]={'\0'};
    int iRet=0;

    printf("Enter string : ");
    scanf("%[^\n]s",Arr);

    iRet=Small(Arr);

    printf("Count of small characters is : %d\n",iRet);

    return 0;
}