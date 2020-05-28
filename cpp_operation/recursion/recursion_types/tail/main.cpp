#include<stdio.h>
using namespace std;

// Tail recursion is function that apply recursion
// But recursion is happened on last procedure
// It's not tail when recursion is combined with operation
void tailRecursion(int n){
    if(n>0){
        printf("countdown - %d\n",n);
        tailRecursion(n-1);
    }
}

int notTailRecursion(int n){
    if(n>0){

        // result of countdown will be same
        // BUT
        printf("countdown - %d\n",n);
        // recursion combined with operation
        // It's NOT tail recursion
        return notTailRecursion(n-1)+n;
    }
    return 0;
}

int main(){

    int n=5;
    tailRecursion(n);

    notTailRecursion(n);

    return 0;
}