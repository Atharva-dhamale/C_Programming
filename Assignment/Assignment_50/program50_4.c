#include<stdio.h>
#include<stdlib.h>
#include<stdbool.h>


struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void InsertFirst(PPNODE first,int no)
{
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*first==NULL)
    {
        *first=newn;
    }
    else
    {
        newn->next=*first;
        *first=newn;
    }
}

void InsertLast(PPNODE first,int no)
{
    PNODE temp=NULL;
    PNODE newn=NULL;
    newn=(PNODE)malloc(sizeof(NODE));
    newn->data=no;
    newn->next=NULL;

    if(*first==NULL)
    {
        *first=newn;
    }
    else
    {
       temp=*first;
       
       while(temp->next!=NULL)
       {
        temp=temp->next;
       }
       temp->next=newn;
    }
}




void Display(PNODE first)
{

    
    while(first!=NULL)
    {
        printf("| %d |->",first->data);
        first=first->next;
    }
    printf("NULL\n");
}

void DisplayAlternate(PNODE first)
{
    int iCnt=0;
    iCnt=1;

    while(first!=NULL)
    {
        if((iCnt%2)!=0)
        {
            printf("| %d |->",first->data);
        }
        iCnt++;
        first=first->next;
        
    } 
    printf("NULL\n");
}




int main()
{
    PNODE head=NULL;
    

    InsertFirst(&head,15);
    InsertFirst(&head,2);

    InsertLast(&head,20);
    InsertLast(&head,22);
    InsertLast(&head,25);

    Display(head);
    
    
    DisplayAlternate(head); 
    

    return 0;
}