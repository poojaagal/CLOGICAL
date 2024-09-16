// c program to print weekdays according to number 

#include<stdio.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    if(a==1){
        printf("MONDAY");
    }
    else if(a==2){
        printf("TUESDAY");
    }
    else if(a==3){
        printf("WEDNESDAY");
    }
    else if(a==4){
        printf("THURSDAY");
    }
    else if(a==5){
        printf("FRIDAY");
    }
    else if(a==6){
        printf("SATURDAY");
    }
    else if(a==7){
        printf("SUNDAY");
    }
    else{
        printf("input is invalid");
    }
    return 0;
}