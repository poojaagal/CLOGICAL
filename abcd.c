//a :apple 
//b :ball
//c :cat 
//d :dog 
//input is not valid 

#include<stdio.h>
int main(){
    char a;
    printf("enter your character : ");
    scanf("%c",&a);
    if(a=='a'){
        printf("apple");
    }
    else if(a=='b'){
        printf("ball");
    }
    else if(a=='c'){
        printf("cat");
    }
    else if(a=='d'){
        printf("dog");
    }
    else{
        printf("input is invalid");
    }
    return 0;
}