#include<stdio.h>
int main(){
    int n;
    int i=2;
    printf("enter the number:");
    scanf("%d",&n);
   int prime=0;
   if(n==1 || n==0){
    prime=1;
   }
   while (i<n)
   {
    if(n%i==0){
        prime=1;
        break;
    }
    i++;
   }
   if(prime){
    printf("%d is not prime number",n);
   }
   else{
    printf("%d is prime number",n);
   }
   

}