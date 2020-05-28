#include <stdio.h>
#include <iostream>
using namespace std;

void addNum(int &number,int adder){
    number=number+adder;
    cout<<"Value on addNum function is ";
    cout<<number<<endl;
}

int main(){

    int number=10;
    cout<<"Initial Value is ";
    cout<<number<<endl;

    // change value locally
    addNum(number,10);

    // value of 'number variable' doesn't change
    cout<<"Value on main function now is ";
    cout<<number<<endl;

    return 0;

}