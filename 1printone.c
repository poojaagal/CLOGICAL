//c program input number when user input a number 1 then print one other wise input is not valid 

#include<stdio.h>
int main(){
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    if(a==1){
        printf("one");
    }
    else{
        printf("input is invalid ");
    }
    return 0;
}