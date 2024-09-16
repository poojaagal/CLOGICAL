// c program input character 'h' then print house otherwise input is not valid 

#include<stdio.h>
int main(){
    char a;
    printf("enter your character : ");
    scanf("%c",&a);
    if(a=='h'){
        printf("house");
    }
    else{
        printf("input is invalid");
    }
    return 0;
}