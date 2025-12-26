#include<stdio.h>
int main(){
    float p,c,m,e,b;
    float aggregate, percentage;

    printf("\nEnter marks of Physics");
    scanf("%f",&p);
    printf("\nEnter marks of Chemistry");
    scanf("%f",&c);
    printf("\nEnter marks of Mathametics");
    scanf("%f",&m);
    printf("\nEnter marks of English");
    scanf("%f",&e);
    printf("\nEnter marks of Biology");
    scanf("%f",&b);

    aggregate= p+c+m+e+b;
    percentage= (aggregate/500)*100;
    printf("\nThe aggregate marks is: %f", aggregate);
    printf("\nThe percentage of marks is: %f", percentage );




return 0;
}
