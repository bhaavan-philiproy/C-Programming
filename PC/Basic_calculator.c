#include<stdio.h>
#include<conio.h>
void main()
{
    float a,b;
    char opr;
    printf("Enter the operation:\n ");
    scanf("%f%c%f",&a,&opr,&b);
    switch (opr)
    {
        case '+':
        printf("Sum is : %f",a+b);
        break;
        case '-':
        printf("Difference is : %f",a-b);
        break;
        case '*':
        printf("Product is : %f",a*b);
        break;
        case '/':
        printf("Quotient is : %f",a/b);
        break;
        default:
        printf("Invalid Function");
        
    }
    getch();
}
