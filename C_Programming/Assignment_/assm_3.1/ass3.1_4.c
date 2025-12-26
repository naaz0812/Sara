#include<stdio.h>
int main(){
    int a,b,c;
    printf("Enter the value of a: ");
    scanf("%d",&a);
    printf("Enter the value of b: ");
    scanf("%d",&b);
    printf("Enter the value of c: ");
    scanf("%d",&c);

    if(a>b&&a>c){

        //if(a>c){
        printf("\nThe largest number is: %d", a);
       // }
    }
    else if(b>a&&b>c){
        //if(b>c){
         printf("\nThe largest number is: %d", b);
        //}
    }
    else if(a==b&&b==c){
        //if(b==c){
            printf("\nAll numbers are equal");
       // }
    }
    else if(c>b&&c>a){
            //if(c>a){
      printf("\nThe largest number is: %d", c);
   // }
    }
    else{
        printf("Wrong Input");
    }

return 0;
}
