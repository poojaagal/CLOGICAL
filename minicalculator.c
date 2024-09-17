// c program to perform a code when respective character is given 
// a : addition of two number
// s : subtraction of two number
// m : multiplication of two number
// d : division of two number
// o : modulus of two number

#include<stdio.h>
int main(){
    char a;
    printf("enter your character : ");
    scanf("%c",&a);
    if(a=='a'){
        int b,c,d;
        printf("enter your number : ");
        scanf("%d%d",&b,&c);
        d=b+c;
        printf("the addition is :%d",d);
    }
    else if(a=='s'){
        int b,c,d;
        printf("enter your number : ");
        scanf("%d%d",&b,&c);
        d=b-c;
        printf("the subtraction is :%d",d);
    }
    else if(a=='m'){
        int b,c,d;
        printf("enter your number : ");
        scanf("%d%d",&b,&c);
        d=b*c;
        printf("the multiplication is :%d",d);
    }
    else if(a=='d'){
        int b,c,d;
        printf("enter your number : ");
        scanf("%d%d",&b,&c);
        d=b/c;
        printf("the division is :%d",d);
    }
    else if(a=='o'){
        int b,c,d;
        printf("enter your number : ");
        scanf("%d%d",&b,&c);
        d=b%c;
        printf("the modular  is :%d",d);
    }
    else {
        printf("invalid input");
    }
    return 0;
}