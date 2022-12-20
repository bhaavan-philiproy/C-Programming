
#include<stdio.h>
#include<conio.h>
void main()
{
    int a=0,b=1,c,i,n;
    printf("Enter the number of elements :\n");
    scanf("%d",&n);
    printf("\n %d %d ",a,b);
    for(i=2;i<n;i++)
    {
        c=a+b;
        printf("%d ",c);
        a=b;
        b=c;
    }
    getch();
}
