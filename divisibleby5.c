// c program to check the number is divisible by 5 or not 

#include<stdio.h>
int main(){
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    if(a%5==0){
        printf("the given number is divisible by 5");
    }
    else{
        printf("the given number is not divisible by 5");
    }
    return 0;
}