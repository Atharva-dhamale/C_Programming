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

int CountTwoDigit(PNODE first)
{
    int iCnt=0;

    while(first!=NULL)
    {
        if(((first->data)>9)&&((first->data)<100))
        {
            iCnt++;
            first=first->next; 
        }  
        else
        {
            first=first->next;
        }
        
    }
    return iCnt;
    
    
    
}




int main()
{
    PNODE head=NULL;
    int iRet=0;

    InsertFirst(&head,31);
    InsertFirst(&head,953);

    InsertLast(&head,84);
    InsertLast(&head,254);

    Display(head);
    
    
    iRet=CountTwoDigit(head);
    printf("The Two digit elements are:%d\n",iRet);
    
    
    

    return 0;
}