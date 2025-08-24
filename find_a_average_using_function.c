#include<stdio.h>

float average(int a,int b,int c);

float average(int a,int b ,int c){
    return (a+b+c)/3;

}

int main(){
    int a;
    int b;
    int c;
    printf("enter the a\n");
    scanf("%d",&a);
    printf("enter the b\n");
    scanf("%d",&b);
    printf("enter the c\n");
    scanf("%d",&c);

    printf("the average of a,b and c is %f",average(a,b,c));
}