#include<stdio.h>

struct UpperTriangleMatrix{

    int size;
    int *M;

};

int MatrixToArrayLength(int size){
    return (size*(size+1))/2;
}

int Index(int size,int i,int j){
    return ((i-1)*size-(i-2)*(i-1)/2)+(j-i);
}

void Display(struct UpperTriangleMatrix m){

    int i;
    int arrSize=MatrixToArrayLength(m.size);
    for(i=0;i<arrSize;i++){
        printf("%d\n",m.M[i]);
    }

}

struct UpperTriangleMatrix Create(int size){

    struct UpperTriangleMatrix m;
    int arrSize=MatrixToArrayLength(size);
    m.M=new int[arrSize];
    m.size=size;
    int i;
    for(i=0;i<arrSize;i++){
        m.M[i]=0;
    }

    return m;

}

void Set(struct UpperTriangleMatrix *m,int i, int j, int val){
    if(j>=i){
        int index=Index(m->size,i,j);
        printf("stored at index - %d",index);
        m->M[index]=val;
    }
}

int Get(struct UpperTriangleMatrix m,int i,int j){
    if(j>=i){
        int index=Index(m.size,i,j);
        return m.M[index];
    }
    return 0;
}

int main(){

    struct UpperTriangleMatrix m=Create(4);

    Display(m);

    Set(&m,2,2,10);

    Set(&m,2,4,12);

    Set(&m,1,1,9);
    
    printf("\n");

    Display(m);

    printf("\n");

    printf("Get element at (1,1) - %d\n",Get(m,1,1));

    return 0;
}