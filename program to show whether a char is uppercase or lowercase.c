//program to show whether a char is uppercase or lowercase
#include<stdio.h>
int main()
{
    char ch ;
    printf("enter character:");
    scanf("%c",&ch);

    if ('A'<=ch && ch<='Z'){
        printf("character is in uppercase %c",ch);
    }
    else if ('a' <= ch && ch <= 'z')
    {
        printf("character is in lowercase %c", ch);
    }
    else{
        printf("character is neither a lowercase nor a uppercase %c",ch );
    }
    return 0 ;
}
