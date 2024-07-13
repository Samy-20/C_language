#include<stdio.h>

int main(){
    char s[] = "WELCOME WORLD";
    char *ptr = s;
    while (*ptr!='\0'){//the string are print upto the null character as give in string .
        printf("%C", *ptr);
        ptr++;
    } 
    return 0;
}
