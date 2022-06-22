//calculate total marks , average marks and percentage of 5 subject of a student 

#include<stdio.h>

int main(){
    int m1 , cprog , foc , com , elex ; 
    printf("Enter the marks of 5 subject : \n");
    scanf("%d %d %d %d %d",&m1,&cprog,&foc,&com,&elex);
    //total marks of 5 subjects
    int total ;
    total = m1 + cprog + foc + com + elex ;
   //average marks of 5 subjects
    float avg ;
    avg = total/5 ;
    //percentage of 5 subjects 
    float percentage ;
    percentage = (total / 500) * 100;
    printf("Total marks obtained by student is : %d" ,total);
    printf("average marks obtained by student is : %f", avg);
    printf("Total marks obtained by student is : %f", percentage);

    return 0 ;
}
