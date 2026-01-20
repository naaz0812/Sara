#include <stdio.h>
int main(){
    int choice;
    int a;
    int b;
    int result;

    printf("Menu\n");
    printf("1. Addition\n");
    printf("2. Subtraction\n");
    printf("3. Multiplication\n");
    printf("4. Division\n");
    printf("Enter your choice: ");
    scanf("%d",&choice);

    switch(choice){
    case 1:
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of b: ");
        scanf("%d",&b);
        result=a+b;
        printf("result %d",result);
        break;
    case 2:
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of b: ");
        scanf("%d",&b);
        result=a-b;
        printf("result %d",result);
        break;
    case 3:
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of b: ");
        scanf("%d",&b);
        result=a*b;
        printf("result %d",result);
        break;
    case 4:
        printf("Enter value of a: ");
        scanf("%d",&a);
        printf("Enter value of b: ");
        scanf("%d",&b);
        result=a/b;
        printf("result %d",result);
        break;
    default:
        printf("invalid option: ");
    }
    return 0;

}
