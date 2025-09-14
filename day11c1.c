#include <stdio.h>
int main(){
    int x;
    printf("ENter the value of x : \n");
    scanf("%d",&x);
    switch(x){
        case 1:printf("January-31 days");
        break;
        case 2:printf("February-28/29days");
        break;
        case 3:printf("March-31 days");
        break;
        case 4:printf("April-30 days");
        break;
        case 5:printf("May-31 days");
        break;
        case 6:printf("June-30days");
        break;
        case 7:printf("july-31 days");
        break;
        case 8:printf("august-31days");
        break;
        case 9:printf("September-30 days");
        break;
        case 10:printf("October-31 days");
        break;
        case 11:printf("November-30 days");
        break;
        case 12:printf("December-31 days");
        break;
        default:printf("Invalid");
        break;
    }return 0;
}