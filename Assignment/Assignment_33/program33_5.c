
//Accept division of student from user and depends on the division display exam timing.
//There are 4 divisions in school as A,B,C,D. Exam of division A at 7Am, B at 8.30Am,
//C at 9.20Am and D at 10.30Am. (Application should be case insensitive). 

#include<stdio.h>


void DisplaySchedule(char ch)
{
    if(((ch=='a')||(ch=='A')))
    {
        printf("Your exam at 7 Am\n");
    }
    else if(((ch=='b')||(ch=='B')))
    {
        printf("Your exam at 8.30 Am\n");
    }
    else if(((ch=='c')||(ch=='C')))
    {
        printf("Your exam at 9.20 Am\n");
    }
    else if(((ch=='d')||(ch=='D')))
    {
        printf("Your exam at 10.30 Am\n");
    }
    else 
    {
        printf("Invalid division\n");
    }
}

int main()
{
    char cValue='\0';
    

    printf("Enter the division :");
    scanf("%c",&cValue);

    DisplaySchedule(cValue);

    
    return 0;
}