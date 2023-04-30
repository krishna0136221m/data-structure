#include<stdio.h>
void main()
{
    int a[10];
    printf("enter element of array");
    for(int i=0;i<10;i++)
    {
        scanf("%d",&a[i]);
    }
    printf("array is \n");
    for(int i=0;i<10;i++)
    {
        printf("%d\n" ,a[i]);
    }
    getch();
}
