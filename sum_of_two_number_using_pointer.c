#include <stdio.h>

void sum_of_two_number(int*a,int*b,int*c){
    *c=*a+*b;
}


int main() {
    int num=45;
    int num1=65;
    int sum;

    sum_of_two_number(&num,&num1,&sum);
    printf("the sum of two number is%d",sum);
    return 0;
}