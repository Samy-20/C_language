#include<stdio.h>
int prime(int a){
    if((a%2 != 0) || (a==2)){
        printf("the number is prime number\n");
    }
    else{
        printf("the number is not prime number\n");
    }
}
int main(){
    int a;
    printf("enter the number: \n");
    scanf("%d", &a);
    prime(a);
    return 0;
}
