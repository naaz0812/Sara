#include<stdio.h>

int main()
{
    int roll, totalMarks, m1,m2,m3;
    float percent;
    char name[50];

    printf("Enter Roll: ");
    scanf("%d", &roll);

    printf("Enter name:");
    scanf("%s",name);

    printf("Enter marks(3 Subjects):");
    scanf("%d%d%d",&m1,&m2,&m3);

    totalMarks=m1+m2+m3;
    percent=(totalMarks/300.0)*100;

    printf("\n Roll %d\n",roll);
    printf("Name %s\n",name);
    printf("totalMarks %d\n",totalMarks);
    printf("percent %f\n",percent);


    if (percent >= 60)
    {
        printf("First Division\n");

    }
    else if(percent >= 50)
    {
        printf("Second Division\n");


    }
    else if(percent >= 40 && percent <50)
    {
        printf("Third Division\n");

    }
    else
    {
        printf("Fail\n");

    }
    return 0;

}
