  #include<stdio.h>
  int main(){
    int m;
    printf("Enter a number m: ");
    scanf("%d",&m);
    if(m>0){
        printf("n is 1");
    }
    else if(m==0){
        printf("n is 0");
    }
    else if(m<0){
        printf("n is -1");
    }
    else{
        printf("Wrong input");
    }
  return 0;
  }
