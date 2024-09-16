// c program input character 'a' then print apple otherwise input is not valid

#include<stdio.h>
int main(){
    char a;
    printf("enter your character : ");
    scanf("%c",&a);
    if(a=='a'){
        printf("apple");
    }
    else{
        printf("input is invalid");
    }
    return 0;
}