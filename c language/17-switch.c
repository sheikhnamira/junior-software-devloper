/*write a program tofo addition,substraction,division,multipliacation by user choice.*/
#include<stdio.h>
void main()
{
    int num1,num2,choice;
    float result;
    printf("enter num1:");
    scanf("%d",&num1);
    printf("enter numk2:");
    scanf("%d",&num2);
    printf("1.sum 2.subtraction 3.dividion 4.multi");
    printf("\n enter your choice:");
    scanf("%d",&choice);
    switch(choice)
    {
        case 1:
        result=num1+num2;
        break;

        case 2:
        result=num1-num2;
        break;

        case 3:
        result=num1/num2;
        break;
        
        case 4:
        result=num1*num2;
        break;

        default:
        printf("invalid choice");
        break;
    }
    if(choice>=1&&choice<=4)
    {
        printf("result=%.2f",result);
    }
}
