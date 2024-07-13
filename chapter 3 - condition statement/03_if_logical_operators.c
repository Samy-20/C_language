#include<stdio.h>

int main(){
    int age;
    int vipPass = 0;

    printf("Enter your age\n");
    scanf("%d", &age); 

    // if (age <= 70 && age>=18)
    if (age <= 70 && age>=18)
    {
        printf("You are above 18 and below 70, you can drive\n");
    }   
    if((age <= 18 && age >= 70) || vipPass == 1)
    {
        printf("enter the 1 if you have vip pass or 0 you donot have vip pass\n", vipPass);
        printf("you can able to drive the car \n");
    }
    else
    {
        printf("You cannot drive\n");
    }
   
    return 0;
}