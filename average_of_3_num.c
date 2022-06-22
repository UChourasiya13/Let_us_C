//program to find average of 3 number
#include<stdio.h>
int main() {
    int a , b , c;
    printf("Enter value of a b and c:");
    scanf("%d%d%d",&a,&b,&c);
    int sum ;
    sum = a + b + c;
    float avg = sum / 3 ;
    printf("average is : %f" , avg);

    return 0 ;
}