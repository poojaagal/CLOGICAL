// c program to take 5 marks input 
// if all subject marks is greater than 36
//       find total average 
//       and print total average 
// else fail

#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the marks :\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>36 && b>36 && c>36 && d>36 && e>36){
        int tot_avg;
        tot_avg=(a+b+c+d+e)/5;
        printf("the total average is : %d",tot_avg);
    }
    else{
        printf("FAIL");
    }
    return 0;
}