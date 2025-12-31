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


void DisplayPrime(PNODE first)
{
   
    int iCnt=0;
    int flag=0;

    while(first!=NULL)
    {
        flag=1;

        for(iCnt=2;iCnt<=first->data/2;iCnt++)
        {
            if(((first->data)%iCnt)==0)
            {
                flag=0;
                break;
            }
        }
        if(flag==1)
        {
            printf("| %d |->",first->data);
        }
        
        
        first=first->next;
    }
    printf("NULL\n");
}



int main()
{
    PNODE head=NULL;

   

    InsertFirst(&head,27);
    InsertFirst(&head,97);

    InsertLast(&head,43);
    InsertLast(&head,20);

    Display(head);
    
    
    DisplayPrime(head);

    
    
    

    return 0;
}