#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    // Create 2D Array in Stack
    int a[3][2]={{1,2},{2,4},{5,6}};

    // Create 2D Array in Stack & Heap
    int *b[3];
    b[0]=new int[2];
    b[1]=new int[2];
    b[2]=new int[2];

    // Create 2D Array in Heap
    int **c;
    c=new int*[3];
    c[0]=new int[2];
    c[1]=new int[2];
    c[2]=new int[2];

    return 0;
}