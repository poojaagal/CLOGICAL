// c program input character when user input p , e , a , k peak word other wise input is not valid

#include<stdio.h>
int main(){
    char a;
    printf("enter your character : ");
    scanf("%c",&a);
    if(a=='p'||a=='e'||a=='a'||a=='k'){
        printf("peak");
    }
    else{
        printf("input is invalid ");
    }
    return 0;
}