// c program input character when user input q,w,e,r,t,y,u,i,o,p upper line other wise input is not valid 

#include<stdio.h>
int main(){
    char a;
    printf("enter your character : ");
    scanf("%c",&a);
    if(a=='q'||a=='w'||a=='e'||a=='r'||a=='t'||a=='y'||a=='u'||a=='i'||a=='o'||a=='p'){
        printf("this character belongs to first line of keyboard ");
    }
    else{
        printf("this input is invalid");
    }
    return 0;
}