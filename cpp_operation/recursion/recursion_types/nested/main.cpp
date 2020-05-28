#include<stdio.h>
using namespace std;

int nestedRecursion(int n){
    if(n>0){
        printf("%d\n",n);
        nestedRecursion(nestedRecursion(n-1));
    }
    return 0;
}

int main(){
    int n=4;

    nestedRecursion(n);

    return 0;
}