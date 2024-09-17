// c program to swap number according to character 
// s : swap number without third variable 
// w : swap number with third variable 

#include<stdio.h>
int main(){
    char a;
    printf("enter the character : ");
    scanf("%c",&a);
    if(a=='s'){
        int b,c;
        printf("enter your number : ");
        scanf("%d%d",&b,&c);
        printf("the value in b before swap : %d\n",b);
        printf("the value in c before swap : %d\n",c);
        b=b+c;
        c=b-c;
        b=b-c;
        printf("the value in b after swap : %d\n",b);
        printf("the value in c after swap : %d\n",c);
    }
    else if(a=='w'){
        int b,c,d;
        printf("enter your number : ");
        scanf("%d%d",&b,&c);
        printf("the value in b before swap : %d\n",b);
        printf("the value in c before swap : %d\n",c);
        d=b;
        b=c;
        c=d;
        printf("the value in b after swap : %d\n",b);
        printf("the value in c after swap : %d\n",c);
    }
    else{
        printf("invalid input");
    }
    return 0;
}
