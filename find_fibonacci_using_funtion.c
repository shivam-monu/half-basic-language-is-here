#include<stdio.h>

int fibonacci(int);
//0,1,1,2,3,5,8,13,21,34  fibonacci serious

int fibonacci(int n){
    if(n==1 || n==2){
        return n-1;
     
    }
    return fibonacci(n-1)+fibonacci(n-2);
}

int main(){
    int n;
    printf("enter the number=");
    scanf("%d",&n);
    printf("the value of fibonaaci serious at%d is %d",n,fibonacci(n));
}