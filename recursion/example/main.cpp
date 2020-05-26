#include<stdio.h>

void recursion(int times){
    // Recursive Condition
    if(times){
        printf("countdown - %d\n",times);
        times--;
        recursion(times);
    }
}

int main(){
    recursion(10);
    return 0;
}