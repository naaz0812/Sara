#include<stdio.h>
int main(){

int a;
for(a=11;a<=16;a=a+1){
    if(a%2==0){
        break;
    }
    printf("%d", a);
}
printf(" EOP");

return 0;
}
