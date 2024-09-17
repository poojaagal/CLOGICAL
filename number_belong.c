// c program to take input and print 
// if it belong to 1 to 10 ,11 to 20 or 34 to 89
// else print invalid input

#include<stdio.h>
int main(){
    int a;
    printf("enter the number : ");
    scanf("%d",&a);
    if(a>=1 &&a<=10){
        printf("this number belong to 1 to 10 group");
    }
    else if(a>=11 && a<=20){
        printf("this number belongs to 11 to 20 group");
    }
    else if(a>=34 && a<=89){
        printf("this number belongs to 34 to 89 group");
    }
    else{
        printf("invalid input");
    }
    return 0;
}