/*write a programe to do the multiplictaion of the given number by the user.
input:5
output:
5*1=5
5*2=10
5*3=15
5*4=20
.....
...
...

5*10=50
make a variable of number,multiplier and answer
accept input from user
multiplier=1
answer=number*multiplier;
printf number+multiplier=answer;
multiplier=multiplier+1;
*/
#include<stdio.h>
void main()
{
    int number,multiplier,answer;
    printf("enter number:");
    scanf("%d",&number);
    multiplier=1;
    while(multiplier<=10)
    {
        answer=number*multiplier;
        printf("%2d*%2d=%2d\n",number,multiplier,answer);
        multiplier++;
    }

}