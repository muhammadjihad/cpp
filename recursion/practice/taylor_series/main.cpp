#include<stdio.h>
using namespace std;

// factorial for finding lower element of taylor series
int factorial(int fact){
    if(fact){
        return factorial(fact-1)*fact;
    }
    return 1;
}

// power for find upper element of taylor series
int power(int basis,int times){
    if(times>1){
        return power(basis,times-1)*basis;
    }
    return basis;
}

// taylor series function
int taylorSeries(int x,int times){
    static int res=0;
    if(times>=0){
        res=res+(power(x,times)/factorial(times));
        return taylorSeries(x,times-1);
    }
    return res;
}

int main(){
    printf("%d",taylorSeries(4,2));
    return 0;
}