#include<stdio.h>

int sum(int,int);

int sum(int a,int b){
    a=6;              //sum is change but not x value change
    return a+b;
}
int main(){
    int x=1,y=6;
    printf("the sum of 1 and 6 is%d\n",sum(x,y));
    printf("the value of x is %d",x);
}