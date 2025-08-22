#include<stdio.h>
int main(){
    int n;
    printf("enter the number:");
    scanf("%d",&n);
    int prime=0;
    if(n==0 || n==1){
      prime=1;
    }
    for (int i=2;i<n;i++){
      if (n%i==0){
         prime=1;
      }
    }
    if(prime){
      printf("%d is  not prime ",n);

    }
    else{
      printf("%d is  prime",n);
    }
}