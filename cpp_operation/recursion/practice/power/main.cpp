#include<stdio.h>
using namespace std;

// Power is multiply with same basis number
// this action will perform 'n' times
int power(int basis,int times){
    if(times>1){
        return power(basis,times-1)*basis;
    }
    return basis;
}

int main(){

    int a=2;
    printf("%d",power(3,3));
    return 0;
}