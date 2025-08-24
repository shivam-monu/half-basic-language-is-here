#include<stdio.h>

float c2f(float);

float c2f(float c){
    return ((9.0*c)/5.0)+32;
}
int main(){

    float c;
    printf("enter the celsius=");
    scanf("%f",&c);
    printf("celsius to farhrenheit for %f is %2f",c,c2f(c));
    return 0;
}