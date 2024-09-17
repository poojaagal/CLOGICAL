// c program to take a user input number and check 
// if it is divisible by 2 and 3 both 
// or it is divisible by 6 or 9 anyone 
// or it is divisible by 5 and 4 both 
// or divisible by 3 or 8 anyone 
// else print invalid input 

#include<stdio.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    if(a%2==0 && a%3==0){
        printf("the number is divisible by 2 and 3 both");
    }
    else if(a%6==0 || a%9==0){
        printf("the number is divisible by 6 or 9");
    }
    else if(a%5==0 && a%4==0){
        printf("the number is divisible by 5 and 4 both");
    }
    else if(a%3==0 || a%8==0){
        printf("the number is divisible by 3 or 8 anyone");
    }
    else{
        printf("invalid input");
    }
    return 0;
}