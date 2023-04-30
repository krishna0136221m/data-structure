#include<stdio.h>
int f=-1;
int r=-1;
int arr[5];
void inqueue();
void dequeue();
void display();
void main()
{
    int choice;
    printf("****MAIN MENU****");
    printf("\n1.inqueue \n2.dequeue \n3.display \n4.exit");
    while(choice!=4)
    {
        printf("\nenter your choice");
        scanf("%d",&choice);
        switch(choice)
        {
        case 1:
            inqueue();
            break;
        case 2:
            dequeue();
            break;
        case 3:
            display();
            break;
        case 4:
            printf("exiting......");
            break;
        default :
            printf("wrong choice ");
        }
    }
}
void inqueue()
{
    int data;
    printf("enter data\t");
    scanf("%d",&data);
    if(((r+1)%5)==f)
    {
        printf("queueu is full");
    }
    else if(f==-1 && r==-1)
    {
        f=r=0;
        arr[r]=data;
    }
    else
    {
        r=(r+1)%5;
        arr[r]=data;
    }
}

void dequeue()
{
    if(f==-1 && r==-1)
    {
        printf("queue is empty");
    }
    else if(f==r)
    {
        f=r=-1;
    }
    else
    {
        printf("deleted element is %d",arr[f]);
        f=(f+1)%5;
    }
}
void display()
{
    int i=f;
    while(i!=r)
    {
        printf("%d\t",arr[i]);
        i=(i+1)%5;
    }
    printf("%d",arr[f]);
}

