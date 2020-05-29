#include<stdio.h>

struct Array{
    int length;
    int *A;
};

bool binarySearch(struct Array arr,int search){

    int low=0,high=arr.length-1,mid;

    int i;
    while(low <= high){
        mid=low+high/2;
        if(arr.A[mid] == search){
            return true;
        } else if(search > arr.A[mid]){
            low++;
        } else {
            high--;
        }
    }
    return false;

}

int main(){

    int *a;
    a=new int[10];
    a[0]=1;
    a[1]=2;  
    a[1]=4;
    a[1]=7;
    a[1]=8;
    a[1]=17;
    a[1]=19;
    a[1]=21;

    struct Array arr={10,a};

    printf("%s",binarySearch(arr,21)?"true":"false");

    return 0;
}