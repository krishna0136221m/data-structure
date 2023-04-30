#include<stdio.h>
void TOH(int, char,char, char);
void main()
{
    int n;
    printf("enter number of disk");;
    scanf("%d",&n);
    TOH(n,'A','B','C');
}
void TOH(int n, char x ,char y, char z)
{
    if(n>0)
    {
        TOH(n-1 ,x ,z ,y);
        printf("from %c to %c\n" , x ,z);
        TOH(n-1 , y ,x ,z);
    }
}

