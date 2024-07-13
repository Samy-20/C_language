#include<stdio.h>

int main(){
    // char str[] = {'H', 'a', 'r', 'r', 'y', '\0'};//\0 :- denotes the string are end
    char str[] = "Harry";//in these statement "\0" are already include1
    char *ptr = str;
    printf("the addderss of array %u", &ptr);
    
    return 0;
}