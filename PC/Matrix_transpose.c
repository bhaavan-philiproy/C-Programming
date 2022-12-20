
#include<stdio.h>
#include<conio.h>
void main()
{
    int a[10][10],t[10][10];
    int i=0,j=0;
    int r,c;
    printf("Enter the number of rows : ");
    scanf("%d",&r);
    printf("Enter the number of columns : ");
    scanf("%d",&c);
    printf("Enter the matrix elements :\n");
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
         scanf("%d",&a[i][j]);
     }
    }
    for(i=0;i<r;i++)
    {
     for(j=0;j<c;j++)
     {
         t[j][i]=a[i][j];
     }
    }
    printf("The transpose of a matrix : \n");
    for(i=0;i<c;i++)
    {
     for(j=0;j<r;j++)
     {
         printf("%d\t",t[i][j]);
         if(j==r-1)
         {
             printf("\n");
         }
     }
    }
    getch();
}
