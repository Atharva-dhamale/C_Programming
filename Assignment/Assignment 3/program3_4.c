
//Accept one  character from user and convert case of that character 

#include<stdio.h>

void DisplayConvert(char CValue)
{
    if(CValue=='a')
    {
        CValue='A';
        printf("%c",CValue);
    }
    else if(CValue=='d')
    {
        CValue='D';
        printf("%c",CValue);
    }
}
int main()
{
    char cValue='\0';

    printf("Enter Character\n");
    scanf("%c",&cValue);

    DisplayConvert(cValue);

    return 0;
}