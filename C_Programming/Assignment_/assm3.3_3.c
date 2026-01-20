#include<stdio.h>
int main(){
    //decelaring value
    int cost_price;
    int selling_price;

    //input value
    printf("enter cost price\t");
    scanf("%d",&cost_price);

    printf("enter selling price\t");
    scanf("%d",&selling_price);

    if(selling_price==cost_price){
        printf("no profit and no loss");
    }else if(selling_price<=cost_price){
        printf("loss amount");
    }else{
       printf("profit amount");
    }

    return 0;


}
