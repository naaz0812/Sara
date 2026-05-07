#include<stdio.h>
int main()
{
    int hours, minutes, min,  total;
    printf("Hours: ");
    scanf("%d", &hours);
    printf("Minutes: ");
    scanf("%d", &minutes);
    min=hours*60;
    total=min+minutes;
    printf("Total: %d", total);
    return 0;
}
