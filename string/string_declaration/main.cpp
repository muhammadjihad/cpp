#include<stdio.h>

int main(){

    // declaration with array of char
    char a[]={'j','i','h','a','d','\0'};
    printf("%s\n",a);

    // declaration with double quotes
    char b[]="jihad";
    printf("%s\n",b);

    // declaration with pointer
    char *c="jihad";
    printf("%s",c);

    return 0;
}