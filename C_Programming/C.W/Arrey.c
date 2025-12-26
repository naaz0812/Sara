#include<stdio.h>
int main(){
clrscr()
int a[5],b[5],c[5],i,j;
printf("Enter 5 numbers");

for(i=0;i<5;i=i+1){
    scanf("%d", &a[i]);
}
printf("Enter 5 numbers again");
for(j=0;j<5;j=j+1){
    scanf("%d", &b[j]);
}
for(i=0;i<5;i=i+1){
   c[i]=a[i]+b[i];
   printf("\n%d", c[i]);
}
return 0;
}
