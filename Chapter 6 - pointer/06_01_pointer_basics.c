#include<stdio.h>

int main(){
    int i = 34;
    int *j = &i; // j will now store the address of i
    int *h = &j; // h will store address of j
    printf("The value of i is %d\n", i);
    printf("The value of i is %d\n", *j);
    printf("The address of i is %u\n", &i);
    printf("The address of i is %u\n", j);
    printf("The address of j is %u\n", &j);
    printf("The value of j is %u\n", *(&j));
    printf("The value of h is %d\n", *h);
    printf("The value of h is %d\n", h);
    printf("The value of h is %d\n", &h);
    printf("The value of h is %u\n", *(&h));
    return 0;
}