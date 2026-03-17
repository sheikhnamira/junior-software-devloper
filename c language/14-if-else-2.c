/*writea programto findout the person is eligible to give civil serviceor not.
---------------------------------------------------------------------------
makeone varible od age.
take input in age.
make ifcondition if the person age is bigger than 19 and smaller than 35 he can give the
civil service
othervise not
*/
#include<stdio.h>
void main()
{
    int age;
    printf("enter age: ");
    scanf("%d",&age);
    if(age>19&&age<35)
    {
       printf("you are eligble to give civil service");
    }


else
{
    printf("you are not eligble to give civil servise");
}
}