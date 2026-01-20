#include<stdio.h>

int main()
{
    int temperature;

    printf("Enter temperature in centigrade:");
    scanf("%d",&temperature);

    if(temperature < 0)
    {
        printf("Freezing point");


    }
    else if(temperature >=0 && temperature < 10)
    {
        printf("Very Cold Weather");

    }
    else if(temperature >=10 && temperature < 20)
    {
        printf("Cold Weather");

    }
    else if(temperature >=20 && temperature < 30)
    {
        printf("Normal in Temp");

    }
    else if(temperature >=30 && temperature < 40)
    {
        printf("It's Hot");

    }
    else if(temperature >= 40)
    {
        printf("It's Very Hot");
    }
    return 0;

}


