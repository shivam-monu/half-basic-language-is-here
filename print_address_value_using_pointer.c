#include<stdio.h>
int main(){
    int a=2;
    int b=4;
    int* c=&a;
    int* d=&b;
    printf("the address of a %d and b %d\n",c,d);
    printf("the value of a %d and b %d",*c,*d);
}