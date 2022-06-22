#include<stdio.h>
int main() {
    float per , rate , time ;
    printf("Enter percentage rate and time ");
    scanf("%f%f%f",&per , &rate , &time );
    float  si = (per * rate * time )/100 ;
    printf("simple interest is : %f" , si);

    return 0 ;
}