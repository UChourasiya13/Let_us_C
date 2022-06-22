#include<stdio.h>
int main() {
    char ch ;
    printf("Enter character in uppercase :\n");
    scanf("%c" , &ch);
    int no ;
    no = ch + 32 ;
    printf("letter in lowercase is : %c" , no);
    return 0 ; 
}