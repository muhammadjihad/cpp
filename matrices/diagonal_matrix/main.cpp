#include<stdio.h>

// Diagonal Matrices Struct
/*
[             ]
    1 0 0 0
    0 8 0 0
    0 0 4 0
    0 0 0 6
[             ]
diagonal matrices left to right
this can solve using 2D array, but too many 0 value
so i manipulate the diagonal matrices into struct with some function
*/

// This code can design with OOP style
struct DiagonalMatrices{
    int size;
    int *M;
};

// For initializing diagonal matrices
struct DiagonalMatrices Create(int size){
    int *matrices;
    matrices=new int[size];

    int i;
    for(i=0;i<size;i++){
        matrices[i]=0;
    }

    struct DiagonalMatrices m={size,matrices};

    return m;
}

// function for set value into specific row and column
// in diagonal matrices
void Set(struct DiagonalMatrices *m,int i,int j,int val){
    // Must to validate that i (row) and j (column) on the same level
    /*
        [                             ]
            *(1,1)* (1,2) (1,3) (1,4)
            (2,1) *(2,2)* (2,3) (2,4)
            (3,1) (3,2) *(3,3)* (3,4)
            (4,1) (4,2) (4,3) *(4,4)*
        [                             ]
    */
    //  i have to validate that program will store the value
    // into correct diagonal matrix position
    // correct position is bracket with '*'
    if(i == j){

        // if position validated, store the value
        m->M[i]=val;
    }
}

// function for get value from specific row and column
void Get(struct DiagonalMatrices *m,int i,int j){
    // Must to validate that i (row) and j (column) on the same level
    /*
        [                             ]
            *(1,1)* (1,2) (1,3) (1,4)
            (2,1) *(2,2)* (2,3) (2,4)
            (3,1) (3,2) *(3,3)* (3,4)
            (4,1) (4,2) (4,3) *(4,4)*
        [                             ]
    */
    //  i have to validate that program will get the value
    // from correct diagonal matrix position
    // correct position is bracket with '*'
    // correct value is condition when i == j
    // because it's diagonal matrix
    if(i!=j){
        printf("%d",0);
    } else {
        // After i == j (validated position)
        // I have to validate the request position with size of matrix
        // if request position > size of matrix, then it will error
        if(i>(m->size-1)){
            printf("Stack overflow");
        } else {
            // Result or Value of request position
            printf("%d",m->M[i]);
        }
    }
}

// Function for display elements of diagonal matrix
void Display(struct DiagonalMatrices *m){
    int i;
    for(i=0;i<m->size;i++){
        printf("%d",m->M[i]);
    }
    printf("\n");
}

// main program
int main(){

    struct DiagonalMatrices m = Create(10);

    Set(&m,2,2,2);
    Display(&m);
    
    Set(&m,4,4,6);
    Display(&m);
    
    Set(&m,2,3,7);
    Display(&m);
    return 0;
}