/*write a programe to findout which product is cheaper and which is expensive.
create vabiable price1,price2,weight1,weight2,price_per_gram_1,price_per_gram_2;
acept 1st product weight and peice
acept 2nd product weight and price
findout price_per_gram_1:
price_per_gram_1=price1/weight1;
findout price_per_gram_2:
price_per_gram_2=price2/weight2;
if(price_per_gram_1<price_per_gram_2)
product1 is cheper
else
product is cheper
*/
#include<stdio.h>
void main()
{
    int price1,price2,weight1,weight2;
    float price_per_gram_1,price_per_gram_2; 

    printf("enter price1:");
    scanf("%d",&price1);
    printf("enter weight1:");
    scanf("%d",&weight1);
    printf("enter price2:");
    scanf("%d",&price2);
    printf("enter weight2:");
    scanf("%d",&weight2);
    price_per_gram_1=price1/weight1;
    price_per_gram_2=price2/weight2;
    
    if(price_per_gram_1<price_per_gram_2)
    {
        printf("product1 is cheper");
    }
    else{
        printf("product 2 is cheper");
    }

}