#include<stdio.h>
void main()
{
    char name[32],address[512];
    printf("enter your name:");
    scanf("%s",name);
    fflush(stdin);//must put this function between input
    printf("enter your address:");
    gets(address);
    //display
    printf("name=%s");
    printf("/n");
    printf(address);
    puts(address);
}   