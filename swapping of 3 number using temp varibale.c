// swapping of  three numbers using fourth variable
#include <stdio.h>

int main()
{
    int num1, num2, num3, temp;
    printf(" enter num1:\n"); // takimg value from user
    scanf("%d", &num1);       // input num1 from user

    printf(" enter num2:\n"); // takimg value from user
    scanf("%d", &num2);       // input num1 from user

    printf(" enter 3:\n"); // takimg value from user
    scanf("%d", &num3);    // input num1 from user
    printf("---------------------------");
    printf("before swapping\n");
    printf("value of num1 is:%d\n", num1);
    printf("value of num2 is:%d\n", num2);
    printf("value of num3 is:%d\n", num3);
    printf("---------------------------");
    temp = num1;
    num1 = num2;//2
    num2 = num3;//3
    num3 = temp;//1
    printf("after swapping \n");
    printf("value of num1 is :%d \n", num1);
    printf("value of num2 is :%d \n", num2);
    printf("value of num3 is :%d \n", num3);

    return 0;
}
