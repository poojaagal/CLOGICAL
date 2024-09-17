// c program to take 5 marks input 
// if all subject marks is greater than 36
//       find percentage 
//       and print percentage  
// else fail

#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the marks :\n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>36 && b>36 && c>36 && d>36 && e>36){
        float per;
        per=((a+b+c+d+e)/500.0)*100.0;
        printf("the percentage is :%f",per);
    }
    else{
        printf("FAIL");
    }
    return 0;
}