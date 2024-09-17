// c program to print season name according to month number 

#include<stdio.h>
int main(){
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    if(a==1||a==2||a==12||a==11){
        printf("WINTER");
    }
    else if(a==3||a==4){
        printf("AUTUMN");
    }
    else if(a==5||a==6||a==9||a==10){
        printf("SUMMER");
    }
    else if(a==7||a==8){
        printf("RAINY");
    }
    else{
        printf("input is invalid");
    }
    return 0;
}