#include<stdio.h>
int main(){
    int i=72;
    int* j=&i;    //j is a pointer pointing to i
    int k=67;
    printf("the address of i %p\n",&i);
    printf("the address of i is %p\n",j);
    printf("the address of k is %p\n",&k);



    printf("the value at address j is %d\n",*j);
    printf("the value at address i is %d\n",*&i);
    printf("the value at address k is %d\n",*&k);

}