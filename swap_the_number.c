#include<stdio.h>
int main(){
    int a=1;
    int b=2;
    int temp;

    int* location_of_a=&a;
    int* location_of_b=&b;

    temp=*location_of_b;
    *location_of_b=*location_of_a;
    *location_of_a=temp;

    printf("a %d b %d",a,b);
}