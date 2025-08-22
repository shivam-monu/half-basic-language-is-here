#include<stdio.h>
int main(){
    int i=1;
    int product=1;
    int n=4;
    while(i<=4){
        product=product*i;
        i++;
    }
    printf("the factorial of %d is %d",n,product);

}