#include<stdio.h>
using namespace std;

// Tree recursion is function that apply 
// recurion more than 1 calling itself in statement
void treeRecursion(int n){
    if(n>0){
        printf("%d\n",n);
        treeRecursion(n-1);
        treeRecursion(n-1);
    }
}

int main(){

    int n=5;
    treeRecursion(n);

    return 0;
}