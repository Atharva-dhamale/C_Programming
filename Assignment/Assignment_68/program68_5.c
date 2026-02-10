#include<stdio.h>


void Display()
{
    static char value='a';

    if(value<='f')
    {
        printf("%c\t",value);
        value++;
        Display();
        
    }
    
}

int main()
{
    Display();
    printf("\n");

    return 0;
}