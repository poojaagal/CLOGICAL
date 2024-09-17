// c programe to take input marks in 5 subjects 
// each subject's marks should be grater than 36 to be pass 
// else fail

#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the marks : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    if(a>36 && b>36 && c>36 && d>36 && e>36){
        printf("PASS");
    }
    else{
        printf("FAIL");
    }
    return 0;
}