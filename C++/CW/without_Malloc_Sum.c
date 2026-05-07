#include<stdio.h>
#include<stdlib.h>
int main(){


int n,a[n],b[n],c[n];

printf("Enter size of arrays: ");
scanf("%d", &n);


printf("Enter values in A : ");
for(int i=0;i<n;i++){
    scanf("%d", &a[i]);
}

printf("Enter values in ptr2 : ");
for(int i=0;i<n;i++){
    scanf("%d", &b[i]);
}
int arr[n];

printf("Some of the values: ");
for(int i=0;i<n;i++){
        arr[i]=a[i]+b[i];
   printf("%d\n", arr[i]);

}



return 0;

}
