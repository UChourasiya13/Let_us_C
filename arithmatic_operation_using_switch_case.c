#include<stdio.h>
int main()
{
    int choice;
    printf("Enter 1 for Addition\n");
    printf("Enter 2 for Substraction\n");
    printf("Enter 3 for Multiplication\n");
    printf("Enter 4 for Division\n");
    printf("Enter 5 for Modulus\n");
    printf("Enter your choice");
    scanf("%d" , &choice);
    int n1, n2, add , sub , mul , div , mod;
    switch (choice)
    {
    case 1:
        
        printf("enter n1 and n2 :");
        scanf("%d%d" ,&n1 , &n2);
        add = n1 + n2 ;
        printf("Addition of numbers is : %d" , add);
        break;
    case 2:
        
        printf("enter n1 and n2 :");
        scanf("%d%d", &n1, &n2);
        sub = n1 - n2;
        printf("Substraction of numbers is : %d", sub);
        break;
    case 3:
        
        printf("enter n1 and n2 :");
        scanf("%d%d", &n1, &n2);
        mul = n1*n2;
        printf("Multiplication of numbers is : %d", mul);
        break;
    case 4:
        
        printf("enter n1 and n2 :");
        scanf("%d%d", &n1, &n2);
        div = n1 / n2;
        printf("Dividion of numbers is : %d", div);
        break;
    case 5:
        
        printf("enter n1 and n2 :");
        scanf("%d%d", &n1, &n2);
        mod = n1 % n2;
        printf("Modulus of numbers is : %d", mod);
        break;

    default:
        printf(" arithmatic operaction cannot performed");
        break;
    }
    return 0;
}