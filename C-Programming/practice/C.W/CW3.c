
#include<stdio.h>
int main(){
    int a;
    for(a=11;a<=16;a+=1){
        if(a%2==0){
            continue;
        }
        printf("%d\n", a);
    }
    printf("EOP");
    return 0;
    }
