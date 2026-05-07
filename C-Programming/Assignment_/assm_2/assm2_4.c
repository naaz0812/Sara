#include<stdio.h>
int main(){
    int min1, hour, min2;
    printf("Enter total minutes: ");
    scanf("%d", &min1);
    hour=min1/60;
    min2=min1%60;
    printf("%d ",hour);
    printf(" hours,");
    printf(" %d", min2);
    printf(" minutes");
return 0;
}
