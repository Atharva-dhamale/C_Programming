
//write a program which accepts string from user and check whether it contains vowels or not

#include<stdio.h>
#include<stdbool.h>

bool ChkVowel(char *str)
{
    
    

    while(*str!='\0')
    {
        if((*str=='a')||(*str=='e')||(*str=='i')||(*str=='o')||(*str=='u'))
        {
            return true;
        }
        
       
        str++;
    }
    return false;
   
    
}

int main()
{
    char arr[20];
    bool bRet=false;

    printf("Enter String: ");
    scanf("%[^'\n']s",arr);

    bRet=ChkVowel(arr);

    if(bRet==true)
    {
        printf("Contains vowel\n");
    }
    else
    {
        printf("There is no Vowel\n");
    }

    
    return 0;
}