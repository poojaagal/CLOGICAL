// write a c program to take input marks of 5 subjects and find its percentage 
// and according to percentage declare the grade 
// 1. Below 25 – F
// 2. 25 to 45 – E
// 3. 45 to 50 – D
// 4. 50 to 60 – C
// 5. 60 to 80 – B 
// 6. Above 80 – A

#include<stdio.h>
int main(){
    int a,b,c,d,e;
    printf("enter the marks : \n");
    scanf("%d%d%d%d%d",&a,&b,&c,&d,&e);
    int tot_avg;
    float per;
    tot_avg=(a+b+c+d+e);
    per=(tot_avg/500.0)*100;
    if(per>80){
        printf("the percentage is : %f\n",per);
        printf("the garde is : A");
    }
    else if(per<=80 && per>60){
        printf("the percentage is : %f\n",per);
        printf("the garde is : B");
    }
    else if(per<=60 && per>50){
        printf("the percentage is : %f\n",per);
        printf("the garde is : C");
    }
    else if(per<=50 && per>45){
        printf("the percentage is : %f\n",per);
        printf("the garde is : D");
    }
    else if(per<=45 && per>25){
        printf("the percentage is : %f\n",per);
        printf("the garde is : E");
    }
    else if(per<25){
        printf("the percentage is : %f\n",per);
        printf("the garde is : F");
    }
    return 0;
}