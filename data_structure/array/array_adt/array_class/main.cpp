#include<stdio.h>

class Array{
    private:
        int *A;
        int size;
        int length;
    public:

        // Constructor for zero array with some size
        Array(int size){
            this->A=new int[size];
            this->length=0;
        }
        
        // Constructor for defined size,length, and some elements
        Array(int size,int length,int *arr){
            this->size=size;
            this->length=length;
            this->A=arr;
        }

        // get length of array
        int getLength(){
            return this->length;
        }

        // get specific element from array
        int getElement(int index){
            return this->A[index];
        }
};

int main(){

    int a[10]={1,2,3,4,5,6};
    Array* arr;
    arr=new Array(10,6,a);

    int i;

    for(i=0;i<arr->getLength();i++){
        printf("%d",arr->getElement(i));
    }


    return 0;
}