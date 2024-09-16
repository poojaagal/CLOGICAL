// c program to check a number is greater than 10 or not 

#include<stdio.h>
int main(){
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    if(a>10){
        printf("the number is greater than 10 ");
    }
    else{
        printf("the number is smaller than 10");
    }
    return 0;
}

