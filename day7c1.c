#include <stdio.h>
int main(){
    int year;
    printf("Enter the year : \n");
    scanf("%d",&year);
    if(year%4==0 && year%400 || year%100!=0){
        printf("It is a leap year.");
    }else{
        printf("It is NOT a leap year.");
    }
return 0;
}