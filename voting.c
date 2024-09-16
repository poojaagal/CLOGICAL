// c program to check the person is eligible to vote or not

#include<stdio.h>
int main(){
    int a;
    printf("enter your age : ");
    scanf("%d",&a);
    if(a>18){
        printf("congrats! you are eligible to vote ");
    }
    else{
        printf("sorry! you are not eligible to vote ");
    }
    return 0;
}