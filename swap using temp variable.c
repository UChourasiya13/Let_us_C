#include<stdio.h>
int main() {
    int a , b , temp ;
    printf("enter number two number:");
    scanf("%d%d",&a,&b);

    //before swapping
    printf("\n before swapping");
    printf("\nvalue of a  is %d", a);
    printf("\nvalue of a  is %d", b);

    //now swap 2 number 
    temp = a ;
    a = b ;
    b = temp;
    printf("\n after swapping");
    printf("\nvalue of a  is %d", a);
    printf("\nvalue of a  is %d", b);

    return 0 ;
}
