#include<stdio.h>
int main(){
    int choice ;
    
    printf("\nPress 1 for Monday");
    printf("\nPress 2 for Tuesday");
    printf("\nPress 3 for Wednesday");
    printf("\nPress 4 for Thursday");
    printf("\nPress 5 for Friday");
    printf("\nPress 6 for Saturday");
    printf("\nPress 7 for Sunday\n");
    printf("Enter your choice:");
    scanf("%d", &choice);

    switch(choice){
        case 1:
            printf("Monday");
            break;
        case 2:
            printf("Tuesday");
            break;
        case 3:
            printf("Wednesday");
            break;
        case 4:
            printf("Thursday");
            break;
        case 5:
            printf("Friday");
            break;
        case 6:
            printf("Saturday");
            break;
        case 7:
            printf("Sunday");
            break;
        default :
        printf("It is not a week day") ;   
    }

    return 0;

}