// c program to check a number is greater than 50 or not 

#include<stdio.h>
int main(){
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    if(a>50){
        printf("the number is greater than 50");
    }
    else{
        printf("the number is smaller than 50");
    }
    return 0;
}