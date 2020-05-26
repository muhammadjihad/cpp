#include<stdio.h>
#include<iostream>
using namespace std;

int main(){

    // Create 2D Array in Stack
    int a[3][2]={{1,2},{2,4},{5,6}};
    int i,j;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<a[i][j]<<endl;
        }
    }


    // Create 2D Array in Stack & Heap
    int *b[3];
    b[0]=new int[2];
    b[1]=new int[2];
    b[2]=new int[2];
    // b[0][0]=0;
    // cout<<b[0][0]<<endl;
    // cout<<b[1][2]<<endl;
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            b[i][j]=0;
            cout<<b[i][j]<<endl;
        }
    }

    // Create 2D Array in Heap
    int **c;
    c=new int*[3];
    c[0]=new int[2];
    c[1]=new int[2];
    c[2]=new int[2];
    for(i=0;i<3;i++){
        for(j=0;j<2;j++){
            cout<<c[i][j]<<endl;
        }
    }
    


    return 0;
}