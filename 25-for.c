/*write a progress to print the qube of number
1 8 27 .......1000
*/
#include<stdio.h.>
void man()
{
    int number,qube;
    for(number=1;number<=10;number++)
    {
        qube=number*number*number;
        printf("0%d10d",qube);
    }
}