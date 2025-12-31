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


bool Isempty(PNODE head)
{

    if(head==NULL)
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
    PNODE head=NULL;

    bool bRet=false;
   

    InsertFirst(&head,24);
    InsertFirst(&head,93);

    InsertLast(&head,31);
    InsertLast(&head,84);

    Display(head);

    bRet=Isempty(head);

    if(bRet==true)
    {
        printf("Linked list is empty\n");
    }
    else
    {
        printf("Linked list is not empty\n");
    }
    
    
    

    return 0;
}