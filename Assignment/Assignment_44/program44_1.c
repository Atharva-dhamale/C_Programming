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



bool Search(PNODE head,int no)
{
    while(head!=NULL)
    {
        if(head->data==no)
        {
            return true;
        }

        head=head->next;
    } 
}



int main()
{
    PNODE head=NULL;
    int iRet=0;

    InsertFirst(&head,27);
    InsertFirst(&head,93);

    InsertLast(&head,25);
    InsertLast(&head,35);

    Display(head);

    iRet=Search(head,25);

    if(iRet==true)
    {
        printf("Element found\n");
    }
    else
    {
        printf("Element not found\n");
    }
    

    

    return 0;
}