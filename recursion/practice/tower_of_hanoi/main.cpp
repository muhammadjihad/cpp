#include<stdio.h>
using namespace std;

void TOH(int n,int A,int B,int C){
    if(n>0){

        // move all disks exclude last disk to auxiliary tower
        // this is recursively using decrement TOH function
        // ex: TOH with 2 disk must be implement TOH with 1 disk 
        TOH(n-1,A,C,B);
        
        
        // Move disk to target
        printf("from %d to %d\n",A,C);

        // Move entire element from auxiliary tower to target
        TOH(n-1,B,A,C);
    }
}

int main(){

    int n=3;
    printf("Solution for moving 3 disk from tower A to tower C using B\n");
    TOH(n,1,2,3);

    printf("Solution for moving 3 disk from tower A to tower B using C\n");
    TOH(n,1,3,2);

    return 0;
}