#include<stdio.h>
int main()
{
    int a[100],b=0,n;
    printf("Enter the array limit");
    scanf("%d",&n);
    printf("Enter the array elements");
    for(int i=0;i<n;i++)
    {
        scanf("%d",&a[i]);
    }
    for(int i=0;i<n-1;i++)
    {
        for(int j=0;j<n-i-1;j++)
        {
            if(a[j]>a[j+1])
            {
                b=a[j];
                a[j]=a[j+1];
                a[j+1]=b;
            }
        }
    }
    printf("\n Sorted list");
    for(int i=0;i<n;i++)
    printf("%d\n",a[i]);
    return 0;
}
