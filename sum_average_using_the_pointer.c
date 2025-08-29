#include<stdio.h>

int* sum(int a, int b){
    int s=a+b;
    int* ptr=&s;
    printf("the sum is %d\n",s);
    return ptr;
}
float* average(int a, int b){
    float k=(a+b)/2.0;
    float* ptr=&k;
    printf("the average is %f\n",k);
    return ptr;

}

int main(){
    int i=2;
    int l=6;
    int* ptr1;
    float* ptr2;
    ptr1=sum(i,l);
    ptr2=average(i,l);

    printf("the address of sum is %u and of average is %u\n",ptr1,ptr2);
}