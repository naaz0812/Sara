#include <stdio.h>

int main(){

    int a,b,c,D;

    printf("Enter the coefficient a:");
    scanf("%d",&a);

    printf("Enter the coefficient b:");
    scanf("%d",&b);

    printf("Enter the coefficient c:");
    scanf("%d",&c);

    //calculate the discriminant value

    D = b*b-4*a*c;


    if (D > 0){
        printf("%d roots are real and distinct.",D);

    }else if(D == 0){
        printf("%d roots are real and equal.",D);

    }else{
        printf("%d roots are complex (imaginary).",D);

    }

    return 0;



}
