//swap number without third variable 

#include<stdio.h>
int main(){
    int a,b;
    printf("enter your number : ");
    scanf("%d",&a);
    printf("enter your number : ");
    scanf("%d",&b);
    printf("the number in a before swap :%d\n",a);
    printf("the number in b before swap :%d\n",b);
    a=a+b;
    b=a-b;
    a=a-b;
    printf("the number in a after swap :%d\n",a);
    printf("the number in b after swap :%d\n",b);
    return 0;
}