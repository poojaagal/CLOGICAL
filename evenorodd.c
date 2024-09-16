// c program to check if a number is even or odd

#include<stdio.h>
int main(){
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    if(a%2==0){
        printf("the number is even");
    }
    else{
        printf("the number is odd");
    }
    return 0;
}