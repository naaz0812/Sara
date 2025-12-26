#include<stdio.h>
int main(){
    int a[4],i;
    printf("Enter 4 values");
    for(i=0;i<4;i=i+1){
        scanf("%d",&a[i]);
    }
    for(i=3;i>=0;i=i-1){
            printf("\n%d\n", a[i]);

    }


return 0;
}
