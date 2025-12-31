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
    printf("NULL\n\n");
}


void CountDigits(PNODE first)
{
    int iDigit=0;
    int iCnt=0;
    int iNo=0;

    while(first!=NULL)
    {
        iCnt=0;
        iNo=first->data;
        while(iNo!=0)
        {
            iDigit=iNo%10;
            iCnt++;
            iNo=iNo/10;
        }
        
        printf("%d -> %d digits\n",first->data,iCnt);
        first=first->next;
    }
}



int main()
{
    PNODE head=NULL;

   

    InsertFirst(&head,27);
    InsertFirst(&head,9327);

    InsertLast(&head,842);
    InsertLast(&head,31535);

    Display(head);
    
    
    CountDigits(head);

    
    
    

    return 0;
}