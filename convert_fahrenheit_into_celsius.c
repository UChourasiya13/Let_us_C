#include<stdio.h>
 int main () {
    float cel ;//celsius
    printf("Enter temperature in celsius :") ;
    scanf("%f" , &cel) ;
    float fah ; //fahreheit
    fah = (9/5)*cel + 32 ;
    printf(" temperature in fahreheit is : %f" , fah);
    return 0 ;
 }