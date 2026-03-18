/*write a programe to find out the factorial of given number .
input:5
output:5*4*3*2*1
output:120
steps:
----------------------------------------------
crete variable number,factorial accept input from user number
factorial=number
factorial=number-1;
factorial=factorial*number;
*/
#include<stdio.h>
void main()
{
    int number,factorial=1;
    printf("enter number:");
    scanf("%d",&number);

    while(number)
    {
        factorial=factorial*number;
        number--;
    }
    printf("%d",factorial);
}