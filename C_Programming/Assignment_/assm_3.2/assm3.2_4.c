#include<stdio.h>

int main()
{
    int a,b,c;

    printf("Enter three sides of the triangle:");
    scanf("%d%d%d",&a,&b,&c);

    if(a == b && b == c )
    {
        printf("Equilateral triangle");

    }
    else if(a == b || b == c )
    {
        printf("Isosceles");

    }
    else if(a != b && b != c && c != a)
    {
        printf("Scalene triangle");
    }
    return 0;

}
