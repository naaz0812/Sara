#include<stdio.h>
int main()
{
    int m,p,c,total,pm_t;
    printf("Enter the marks of Maths: ");
    scanf("%d",&m);
    printf("Enter the marks of Physics: ");
    scanf("%d",&p);
    printf("Enter the marks of Chemistry: ");
    scanf("%d",&c);
    total=m+p+c;
    pm_t=m+p;
    printf("\n%d\n",total);
    printf("%d\n",pm_t);
    if(m>=65&&p>=55&&c>=50&&total>=190&&pm_t>=140){
        printf("Candidate is eligible");
    }
    else{
        printf("Candidate is not  eligible");
    }



    return 0;
}
