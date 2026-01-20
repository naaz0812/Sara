#include<stdio.h>
int main(){

    char character;
    char a;
    char z;
    char A;
    char Z;

    printf("Enter a character: ");
    scanf("%c",& character);

    if(character>='a' && character<='z' || character>='A' && character<='Z'){
        printf("Alphabet");
    }
     else if(character>='0' && character<='9'){
        printf("Digit");
     }
      else{
        printf("Special character");
      }

}
