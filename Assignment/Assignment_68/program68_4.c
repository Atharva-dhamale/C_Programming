#include<stdio.h>


void Display()
{
    static char value='A';

    if(value<='F')
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