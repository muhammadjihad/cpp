#include<stdio.h>
using namespace std;

// Head recursion is a function that 
// apply recursion on first statement
void headRecursion(int n){
    if(n>0){
        headRecursion(n-1);
        printf("countdown - %d\n",n);
    }
}

int main(){

    int n=5;
    headRecursion(n);

    return 0;
}