#include<stdio.h>
using namespace std;

// Registering function that will
// create a looping function
// (indirect recursion)
void funA(int n);
void funB(int n);

void funA(int n){
    if(n>0){
        printf("countdown A - %d\n",n);
        funB(n-1);
    }
}

void funB(int n){
    if(n>0){
        printf("countdown B - %d\n",n);
        funA(n-1);
    }
}

int main(){

    int n=10;

    // Function A will call B then B will call A again
    // This will happen till one of condition in funA or funB not fullfil
    funA(n);

    return 0;
}