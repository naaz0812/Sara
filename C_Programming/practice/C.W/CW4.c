#include<stdio.h>
int main()
{
    int n;
    for(n=1;n<=30;n+=1){
        if(n%3==0){
            continue;

        }
        else{

            printf("%d ", n);
        }
    }
    return 0;
}
