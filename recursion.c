#include<stdio.h>


int factorial(int);


int factorial(int n){
    if(n==1 || n==0){      //base condition
        return 1;        //a program to calculate factorial using recursion
    }
    return factorial(n-1)*n;
}

int main(){
    int a=8;
    printf("the factorial of %d is %d",a,factorial(a));
    return 0;
    
}


