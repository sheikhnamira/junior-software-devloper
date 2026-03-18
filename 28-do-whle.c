/*write a program to print the table of number.*/
#include<stdio.h>
void main()
{
    int num=5,i=1;
    do
    {
        printf ("%d*%d=%d\n",num,i,num*1);
        i++;
    }
    while(i<=10);
}