#include<stdio.h>

float force(float);

float force(float m){
    return m*9.8;
}

int main(){
    float m;
    printf("enter the mass=");
    scanf("%f",&m);
    printf("force of attraction is %f",force(m));

}