// c program to print that a character belong to which keyboard line 

#include<stdio.h>
int main(){
    char a;
    printf("enter your character : ");
    scanf("%c",&a);
    if(a=='q'||a=='w'||a=='e'||a=='r'||a=='t'||a=='y'||a=='u'||a=='i'||a=='o'||a=='p'){
        printf("the character belongs to first line of keyboard");
    }
    else if(a=='a'||a=='s'||a=='d'||a=='f'||a=='g'||a=='h'||a=='j'||a=='k'||a=='l'){
        printf("the character belongs to second line of keyboard");
    }
    else if(a=='z'||a=='x'||a=='c'||a=='v'||a=='b'||a=='n'||a=='m'){
        printf("the character belongs to third line of keyboard");
    }
    else{
        printf("input is invalid");
    }
    return 0;
}