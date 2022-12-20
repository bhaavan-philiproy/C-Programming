
#include<stdio.h>
int main()
{
    int a[100],b,n,i;
    printf("Enter limit of array");
    scanf("%d",&n);
    for(i=0;i<n;i++)
    {
        scanf("%d",a[i]);
        
    }
    printf("Enter the no. to be searched");
    scanf("%d",&b);
    for(i=0;i<n;i++)
    {
        if(a[i]==b)
        {
            printf("Element found at %d position",i+1);
            break;
        }
    }
    if(i==n)
    printf("The no. is not present in the array");
    return 0;
}
