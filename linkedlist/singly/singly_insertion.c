#include<stdio.h>
#include<stdlib.h>
struct node{
    int data;
    struct node* next;
}*head,*temp;
void insertAtfront()
{

    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    newnode->next=head;
    head=newnode;
}
void insertAtend()
{

    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
  
        temp=head;
        while(temp->next!=NULL)
        {
            temp=temp->next;
        }
        temp->next=newnode;
        newnode->next=NULL;
    
}
void insertAtmiddle()
{
    int pos;
    scanf("%d",&pos);int i=1;
    struct node* newnode=(struct node*)malloc(sizeof(struct node));
    scanf("%d",&newnode->data);
    temp=head;
    while(i<pos-1)
    {
      temp=temp->next;
      i++;
    }
    newnode->next=temp->next;
    temp->next=newnode;
}
void display(){
    struct node* tempp=head;
    if(head==NULL)
    {
        printf("Overflow\n");
    }
    else{
        while(tempp!=NULL)
        {
            // if(tempp->data==20)
            // {
            //     printf("maha->");
            // }
            printf("%d->",tempp->data);
            tempp=tempp->next;
        
        }
        printf("\n");
    }
}
int main()
{
    int ch;
    while(1){
        scanf("%d",&ch);
        switch(ch)
        {
            case 1:
            insertAtfront();
            break;
            case 2:
            insertAtend();
            break;
            case 3:
            insertAtmiddle();
            break;
            case 4:
            display();
            break;
            case 5:
            exit(0);
        }
    }
}
