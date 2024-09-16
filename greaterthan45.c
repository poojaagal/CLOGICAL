// c program to check a number is greater than 45 or not 

#include<stdio.h>
int main(){
    int a ;
    printf("enter your number : ");
    scanf("%d",&a);
    if(a>45){
        printf("the number is greater than 45");
    }
    else{
        printf("the number is smaller than 45");
    }
    return 0;
}