#include<stdio.h>
int main(){
    int i=5;
    int* j=&i;
    int** k=&j;

    printf("the value of i is%d\n",i);
    printf("the value of i is %d\n",*j);
    printf("the value od i is %d\n",*&i);
    printf("the value of i is %d\n",**&j);
}