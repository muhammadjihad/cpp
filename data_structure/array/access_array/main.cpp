#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    // Access Array from stack
    int a[5]={1,2,3,4,5};
    int i;
    cout<<"FROM STACK"<<endl;
    for(i=0;i<5;i++){
        cout<<a[i]<<endl;
    }

    // Access Array from heap
    int *b;
    b=new int;
    b[0]=1;
    b[1]=2;
    b[2]=3;
    b[3]=4;
    b[4]=5;
    cout<<"FROM HEAP"<<endl;
    for(i=0;i<5;i++){
        cout<<b[i]<<endl;
    }
    // Close heap
    // delete b;

    return 0;
}