#include<stdio.h>
int main(){
    float selling_p, profit, c, price ;

    printf("Enter the total selling price of all 15 items: ");
    scanf("%f", &selling_p);
    printf("Enter the total profit earned by selling: ");
    scanf("%f", &profit);
    c=selling_p-profit;
    price=c/15;
    printf("The cost price per item is: %f",price );


return 0;
}
