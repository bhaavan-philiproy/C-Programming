
#include<stdio.h>
#include<conio.h>
void main()
{
    float tpr,t,p;
    printf("Enter the total number of samples : ");
    scanf("%f",&t);
    printf("Enter the number of positive cases : ");
    scanf("%f",&p);
    tpr=p*100/t;
    printf("TPR = %f",tpr);
    if(tpr<=5)
    {
        printf("\nThe condition is under control");
    }
    else
    {
        printf("\nThe condition is not under control");
    }
    getch();
}
