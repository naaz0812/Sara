#include<stdio.h>
int main()
{
    int x,y;
    printf("Enter value of 'X' quadrant");
    scanf("%d",&x);
    printf("Enter value of 'Y' quadrant");
    scanf("%d",&y);

    if(x>0 && y>0){
        printf("The point (%d,%d) lies in Quadrant-I", x,y);
    }
    else if(x<0 && y>0){
        printf("The point (%d,%d) lies in Quadrant-II", x,y);
    }
    else if(x<0 && y<0){
        printf("The point (%d,%d) lies in Quadrant-III", x,y);
    }
    else if(x>0 && y<0){
        printf("The point (%d,%d) lies in Quadrant-IV", x,y);
    }

    else if(x==0 && y==0){
        printf("The point (%d,%d) lies at the Origin", x,y);

    return 0;
}
