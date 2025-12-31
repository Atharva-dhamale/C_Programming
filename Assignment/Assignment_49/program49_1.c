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

int Difference(PNODE first)
{
    int iMax=0;
    int iMin=0;
    iMin=first->data;

    while(first!=NULL)
    {
        if(iMax<first->data)
        {
            iMax=first->data;    
        }
        else if(iMin>first->data)
        {
            iMin=first->data;
        }
        first=first->next;
        
    }
    return iMax-iMin;
    
}




int main()
{
    PNODE head=NULL;
    int iRet=0;
   

    InsertFirst(&head,31);
    InsertFirst(&head,93);

    InsertLast(&head,84);
    InsertLast(&head,25);

    Display(head);
    
    
    iRet=Difference(head);
    printf("Difference Between Max and Min is :%d\n",iRet);
    
    

    return 0;
}