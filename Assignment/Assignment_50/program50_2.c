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

void DisplayGreaterThanAvg(PNODE first)
{
    int Avg=0;
    int iCnt=0;
    PNODE temp=NULL;

    temp=first;

    while(temp!=NULL)
    {
        Avg=Avg+temp->data;
        iCnt++;
        temp=temp->next;
        
        
    }
    

    Avg=Avg/iCnt;

    temp=first;

    while(temp!=NULL)
    {
        if((temp->data)>Avg)
        {
            printf("| %d |->",temp->data);
        }
        
        temp=temp->next;
    }
    printf("NULL\n"); 
}




int main()
{
    PNODE head=NULL;

    InsertFirst(&head,15);
    InsertFirst(&head,2);

    InsertLast(&head,10);
    InsertLast(&head,5);
    InsertLast(&head,25);

    Display(head);
    
    
    DisplayGreaterThanAvg(head);    
    

    return 0;
}