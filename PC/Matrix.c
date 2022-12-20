
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10],b[10],r,c,i,j,f[i][j],k;
    char opr;
    printf("Enter the no. of rows:  ");
    scanf("%d",&r);
    printf("Enter the no. of columns :  ");
    scanf("%d",&c);
    printf("Enter the first matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&a[i][j]);
        }
    }
    printf("Enter the operator:  ");
    scanf("%c",&opr);
    printf("Enter the second matrix \n");
    for(i=0;i<r;i++)
    {
        for(j=0;j<c;j++)
        {
            scanf("%d",&b[i][j]);
        }
    }
    switch(opr)
    {
        case '+':
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                f[i][j]=a[i][j]+b[i][j];
            }
        }
        break;
        case '*':
        for(i=0;i<r;i++)
        {
            for(j=0;j<c;j++)
            {
                f[i][j]=0;
                for(k=0;k<c;k++)
                {
                    f[i][j]+=a[i][k]*b[k][j];
                }
            }
        }
        break;
    }
    
}
