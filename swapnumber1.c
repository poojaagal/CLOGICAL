// swap number with third variable 

#include<stdio.h>
int main(){
    int a,b,c;
    printf("enter your number : ");
    scanf("%d",&a);
    printf("enter your number : ");
    scanf("%d",&b);
    printf("the number in a before swap:%d\n",a);
    printf("the number in b before swaf:%d\n",b);
    c=a;
    a=b;
    b=c;
    printf("the number in a after swap:%d\n",a);
    printf("the number in b after swap:%d\n",b);
    return 0;
}