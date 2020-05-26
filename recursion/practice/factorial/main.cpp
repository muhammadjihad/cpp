#include<stdio.h>
using namespace std;


// Factorial Function
int factorial(int fact){
    if(fact>=1){
        return factorial(fact-1)*fact;
    }
    return 1;
}

int main(){

    int n=5;
    printf("%d",factorial(n));

    return 0;
}