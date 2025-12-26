#include<stdio.h>
int main(){
    int a[5], b[5], i;
    printf("Enter 5 values");
    for(i=0;i<5;i=i+1){
        scanf("%d",&a[i]);
    }
    for(i=0;i<5;i=i+1){
            b[i]= a[i];
    printf("%d", b[i]);
    }

return 0;
}
