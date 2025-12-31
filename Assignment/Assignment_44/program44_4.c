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


int Frequency(PNODE head,int no)
{
    int iCnt=0;

    while(head!=NULL)
    {
        if((head->data)==no)
        {
            iCnt++;
        }

        head=head->next;
    }  
    return iCnt;
}



int main()
{
    PNODE head=NULL;
    int iRet=0;

    InsertFirst(&head,27);
    InsertFirst(&head,93);

    InsertLast(&head,93);
    InsertLast(&head,93);

    Display(head);

    iRet=Frequency(head,93);

    printf("Frequency of nodes are:%d\n",iRet);
    

    

    return 0;
}