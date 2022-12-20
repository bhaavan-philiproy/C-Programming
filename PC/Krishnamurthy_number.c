
#include<stdio.h>
#include<conio.h>
int fact(int);
void main()
{
    int n,m,f,sum=0;
    printf("Enter the number : ");
    scanf("%d",&n);
    while(n!=0)
    {
        m=n%10;
        f=fact(m);
        sum=sum+f;
        n=n/10;
    }
    printf("%d\n",sum);
    if(sum==n)
    {
        printf("The number is a Krishnamurthy Number");
    }
    else
    {
    printf("The number is not a Krishnamurthy Number");
    }
    getch();
}
int fact(int m)
{
    if(m==0)
    
    return 1;
    else if(m==1)
    return 1;
    else 
    return m*fact(m-1);
}
