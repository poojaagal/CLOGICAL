// c program to print month name according to numbers 

#include<stdio.h>
int main(){
    int a;
    printf("enter your number : ");
    scanf("%d",&a);
    if(a==1){
        printf("january");
    }
    else if (a==2){
        printf("february");
    }
    else if (a==3){
        printf("march");
    }
    else if (a==4){
        printf("april");
    }
    else if (a==5){
        printf("may");
    }
    else if (a==6){
        printf("june");
    }
    else if (a==7){
        printf("july");
    }
    else if (a==8){
        printf("august");
    }
    else if (a==9){
        printf("september");
    }
    else if (a==10){
        printf("october");
    }
    else if (a==11){
        printf("november");
    }
    else if (a==12){
        printf("december");
    }
    else{
        printf("input is invalid");
    }
    return 0;
}