#include<stdio.h>
int main(){
    //Decelaring value
    char character;

    //taking value
    printf("enter a character\t");
    scanf("%c",&character);

    if(character=='a'||character=='e'||character=='i'||character=='o'||character=='u'){
        printf("vowel");
    }else{
     printf("constant");
    }

    return 0;



}
