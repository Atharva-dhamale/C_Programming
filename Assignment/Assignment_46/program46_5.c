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

    printf("Original linked list\n");
    while(first!=NULL)
    {
        printf("| %d |->",first->data);
        first=first->next;
    }
    printf("NULL\n");
}


void IncrementAll(PPNODE first)
{
    printf("Updated linked list\n");
    while(*first!=NULL)
    {
        (*first)->data++;
        printf("| %d |->",(*first)->data);
        *first=(*first)->next;
    }
    printf("NULL\n");
}



int main()
{
    PNODE head=NULL;

   

    InsertFirst(&head,27);
    InsertFirst(&head,93);

    InsertLast(&head,84);
    InsertLast(&head,31);

    Display(head);
    
    IncrementAll(&head);

    return 0;
}