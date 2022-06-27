//program to compare weather 2 number are equal or not 

#include<stdio.h>
int main(){
    int num1 , num2 ;
    printf("Enter 2 number : ");
    scanf("%d%d",&num1 , &num2);
    if (num1==num2)
    {
        printf("num1 and num2 are equal");
    }
    else
    {
        printf("num1 and num2 are not equal");
    }

    return 0 ;
}