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

    
    while(first!=NULL)
    {
        printf("| %d |->",first->data);
        first=first->next;
    }
    printf("NULL\n");
}

void ReplaceEven(PPNODE first)
{
    while(*first!=NULL)
    {
        if((((*first)->data)%2)==0)
        {
            (*first)->data=0;
            printf("| %d |->",(*first)->data);  
        }
        else
        {
            printf("| %d |->",(*first)->data);
        }
        
        *first=(*first)->next;
    } 
    printf("NULL\n");
}




int main()
{
    PNODE head=NULL;

   

    InsertFirst(&head,27);
    InsertFirst(&head,92);

    InsertLast(&head,84);
    InsertLast(&head,31);

    Display(head);
    
    
    ReplaceEven(&head);
    
    

    return 0;
}