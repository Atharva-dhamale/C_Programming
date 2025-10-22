
//Accept one character from user and check whether that character is vowel or not

#include<stdio.h>
#include<stdbool.h>

bool CheckVowel(char CValue)
{
    if(CValue=='a'|CValue=='e'|CValue=='i'|CValue=='o'|CValue=='u'|CValue=='A'|CValue=='E'|CValue=='I'|CValue=='O'|CValue=='U')
    {
        return true;
    }
    else
    {
        return false;
    }
}
int main()
{
    char cValue='\0';
    bool bRet=false;

    printf("Enter Character\n");
    scanf("%c",&cValue);

    bRet=CheckVowel(cValue);

    if(bRet==true)
    {
        printf("It is vowel");
    }
    else
    {
        printf("It is not vowel");
    }

    return 0;
}