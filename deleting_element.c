#include<stdio.h>
void main()
{
    int a[10],n,pos,i;
    printf("enter size of array");
    scanf("%d",&n);
    printf("enter elements of array");
    for(i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("enter position from where to delete elements");
    scanf("%d",&pos);
    for(i=pos;i<n-1;i++)
    {
        a[i]=a[i+1];
    }
    n--;
    printf("array is \n");
    for(int i=0;i<n;i++)
    {
        printf("%d\n",a[i]);
    }
    getch();
}
