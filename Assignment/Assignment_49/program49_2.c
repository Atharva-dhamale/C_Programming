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

bool CheckAllPositive(PNODE first)
{

    while(first!=NULL)
    {
        if((first->data)<0)
        {
           return false; 
        }
        first=first->next;
        
    }
    return true;
    
    
}




int main()
{
    PNODE head=NULL;
    bool bRet=0;
   

    InsertFirst(&head,31);
    InsertFirst(&head,93);

    InsertLast(&head,84);
    InsertLast(&head,25);

    Display(head);
    
    
    bRet=CheckAllPositive(head);
    
    if(bRet==true)
    {
        printf("All Elements are  positive\n");
    }
    else
    {
        printf("All Elements are not positive\n");
    }
    

    return 0;
}