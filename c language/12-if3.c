/*write a program to find the frame is portrait,landscape,squre upon its width and height*/
#include<stdio.h>
void main()
{
    int length,width;
    printf("enter length:");
    scanf("%d",&length);
    printf("enter width:");
    scanf("%d",&width);
    if(length>width)
    {
        printf("the shape is portrait");
    }
    if(width==length)
    {
        printf("the shape is squre");
    }
    if(width<length)
    {
         printf("the shape is landscape");

    }
   

}