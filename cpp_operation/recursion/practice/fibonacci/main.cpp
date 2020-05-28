#include<stdio.h>
using namespace std;

// Function for finding value of 'n'
// in fibonacci series
int fibonacciSeries(int n){
    if(n>0){
        // printf("%d - %d\n",(n),(n-1));
        return fibonacciSeries(n-1)+fibonacciSeries(n-2);
    }
    return 1;
}

int main(){

    int n=5,sum=0;
    int i;
    // for finding sum of fibonacci series
    for(i=0;i<n;i++){
        printf("value of 'n' is - %d ",fibonacciSeries(i));
        sum=sum+fibonacciSeries(i);
        printf("sum is - %d\n",sum);
    }

    return 0;
}