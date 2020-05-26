#include<stdio.h>
using namespace std;

// No static variable
// So value of 'n' will be different on every stack
// Depend on how deep is recursion tree
int withoutStatic(int n){
    if(n>0){
        return withoutStatic(n-1)+n;
    }
    return 0;
}

// Using static variable
// So value of incrementor will static
// static variable is written on code memory
int withStatic(int n){
    static int x=0;
    if(n>0){
        x++;
        return withStatic(n-1)+x;
    }
    return 0;
}


int x=0;
int withGlobal(int n){
    if(n>0){
        x++;
        return withGlobal(n-1)+x;
    }
    return 0;
}

int main(){

    int n=5;

    // Without Static
    printf("%d\n",withoutStatic(n));

    // Using Static
    printf("%d\n",withStatic(n));

    // Using global
    printf("%d",withGlobal(n));

    return 0;
}