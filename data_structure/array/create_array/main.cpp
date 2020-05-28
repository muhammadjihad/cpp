#include <stdio.h>
#include <iostream>
using namespace std;

int main(){

    // create on stack
    int a[10]={1,2,3,4,6};
    int i;
    for(i=0;i<10;i++){
        cout<<a[i]<<endl;
    }

    // create on heap
    int *b=new int[10];
    b[0]=1;
    b[1]=2;
    b[2]=3;
    for(i=0;i<10;i++){
        cout<<b[i]<<endl;
    }

    // Don't forget to delete memory on HEAP
    delete []b;


    return 0;
}