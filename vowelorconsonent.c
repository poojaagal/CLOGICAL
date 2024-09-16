// c program to check a input character is vowel or consonant 

#include<stdio.h>
int main(){
    char a;
    printf("enter your character to check : ");
    scanf("%c",&a);
    if(a=='a'||a=='e'||a=='i'||a=='o'||a=='u'){
        printf("character is vowel");
    }
    else{
        printf("character is consonant");
    }
    return 0;
}