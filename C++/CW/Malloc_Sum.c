#include<stdio.h>
#include<stdlib.h>
int main(){
int *ptr1,*ptr2,n1,n2;
printf("Enter size of ptr1");
scanf("%d", &n1);
printf("Enter size of ptr2");
scanf("%d", &n2);

ptr1=(int*) malloc(n1 * sizeof(int));
ptr2=(int*)malloc(n2* sizeof(int));

printf("Enter values in ptr1 : ");
for(int i=0;i<n1;i++){
    scanf("%d", &ptr1[i]);
}
printf("Enter values in ptr2 : ");

for(int i=0;i<n2;i++){
    scanf("%d", &ptr2[i]);
}

//for(int i=0;i<n1;i++){
  // printf("%d\n", ptr1[i]);
//}

//for(int i=0;i<n2;i++){
  // printf("%d\n", ptr2[i]);

//}

int arr[n1];
printf("Some of the values: ");
for(int i=0;i<n1;i++){
        arr[i]=ptr1[i]+ptr2[i];
   printf("%d\n", arr[i]);

}




free(ptr1);
free (ptr2);

return 0;

}
