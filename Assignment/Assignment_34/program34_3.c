
//Accept chracter from user . If charcter is capital display all  character from input character till Z,
//and if input character is small then display  in reverse order till a. .In other cases display as it is.

#include<stdio.h>


void Display(char ch)
{

    int iCnt='\0';

        if((ch>='A')&&(ch<='Z'))
        {
            for(iCnt=ch;iCnt<='Z';iCnt++)
            {
                printf("%c\t",iCnt);
            }
            printf("\n");
            
        }

        

        else if((ch>='a')&&(ch<='z'))
        {
            for(iCnt=ch;iCnt>='a';iCnt--)
            {
                printf("%c\t",iCnt);
            }
        }

        printf("\n");
}

int main()
{
    char cValue='\0';
    

    printf("Enter the character :");
    scanf("%c",&cValue);

    Display(cValue);

    
    return 0;
}