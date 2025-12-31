#include<stdio.h>
#include<stdlib.h>


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

    printf("Original linked list is\n");
    while(first!=NULL)
    {
        printf("| %d |->",first->data);
        first=first->next;
    }
    printf("NULL\n");
}


void DisplayOdd(PNODE first)
{

    printf("Odd element in linked list are\n");
    while(first!=NULL)
    {
        if(((first->data)%2)!=0)
        {
            printf("| %d |->",first->data);
        }
        
        first=first->next;
    }
    printf("\n");
    
}



int main()
{
    PNODE head=NULL;
    int iRet=0;

    InsertFirst(&head,24);
    InsertFirst(&head,93);

    InsertLast(&head,31);
    InsertLast(&head,84);

    Display(head);

    DisplayOdd(head);
    

    

    return 0;
}