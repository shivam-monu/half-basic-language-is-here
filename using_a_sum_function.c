#include<stdio.h>

// function protype
int sum(int,int);

// function defination
int sum(int x,int y){
    //printf("the sum is %d\n",x+y);
    return x+y;
}
int main(){
    int a=1;
    int b=4;
    int c=sum(a,b);   //function call
    printf("%d\n",c);

    int a1=21;
    int b1=65;
    int c1=sum(a1,b1);   //function call
    printf("%d\n",c1);
    return 0;

}
