//traverse in farward
/*
#include<stdio.h>
#include<stdlib.h>
struct node
{
    int data;
    struct node *pre;
    struct node *next;
};
struct node *start;
void insert(int);
void display();
int main()
{
    int n;
    printf("enter number of node");
    scanf("%d",&n);
    insert(n);
    display();
    return 0;
}
void insert(int n)
{
    int i;
    struct node *temp;
    struct node *newnode;
    int data;
    start=(struct node *)malloc(sizeof(struct node));
    printf("enter data for node 1 : ");
    scanf("%d",&data);
    start->data=data;
    start->next=NULL;
    start->pre=NULL;
    temp=start;
    for(i=2;i<n+1;i++)
    {
        printf("enter data for node %d : " ,i);
        scanf("%d",&data);
        newnode=(struct node *)malloc(sizeof(struct node));
        newnode->data=data;
        newnode->next=NULL;
        temp->next=newnode;
        newnode->pre=temp;
        temp=temp->next;
    }
}
void display()
{
    struct node *temp;
    temp=start;
    while(temp!=NULL)
    {
        printf("%d\t",temp->data);
        temp=temp->next;
    }
}
*/
