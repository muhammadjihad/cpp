#include<stdio.h>

// Lower Triangle Matrix
/*
[             ]
    1 0 0 0
    2 8 0 0
    5 6 4 0
    3 2 7 6
[             ]
Lower triangle matrices
this can solve using 2D array, but too many 0 value
so i manipulate the diagonal matrices into struct with some function
*/

struct LowerTriangleMatrix{
    int size;
    int *M;
};

struct LowerTriangleMatrix Create(int size){

    // I have to convert size of size matrix
    // into size of 1D array
    // if we see total of the lower triangle matrix follows the aritmetic pattern
    // ex: if size is 4 then total of elements is 1+2+3+4
    // so we can convert from size of matrix into 1D array using Sn of aritmetic
    // Sn=n/2(a+Un)
    int arrSize=size*(1+size)/2;
    
    int *matrix;
    matrix=new int[arrSize];

    int i;
    for(i=0;i<arrSize;i++){
        matrix[i]=0;
    }

    struct LowerTriangleMatrix m={arrSize,matrix};
    return m;
}

void Display(struct LowerTriangleMatrix m){
    int i;
    for(i=0;i<m.size;i++){
        printf("%d ",i);
        printf("%d\n",m.M[i]);
    }
}

void Set(struct LowerTriangleMatrix *m,int i,int j,int val){
    // validate correct position
    // Lower Triangle Matrix correct position happened when i<=j
    // Look at this matrix
    /*
        [                                    ]
            *(1,1)* -(1,2)- -(1,3)- -(1,4)-
            *(2,1)* *(2,2)* -(2,3)- -(2,4)-
            *(3,1)* *(3,2)* *(3,3)* -(3,4)-
            *(4,1)* *(4,2)* *(4,3)* *(4,4)*
        [                                    ]
    */
    //the i (row) position never more than j (column) position
    if(j<=i){
        // then convert 2D position into 1D position
        // this convert using row major formula
        // f(i,j) = ( ( (i-1)/2 ) * i) + j   = total
        int position=(((i-1)*i)/2) +j-1;
        printf("allocating %d into %d",val,position);
        m->M[position]=val;
    }
}

void Get(struct LowerTriangleMatrix m,int i,int j){
    if(j<=i){
        int position=(((i-1)*i)/2) +j-1;
        printf("%d\n",m.M[position]);
    // if request position not valid (i>j)
    } else {
        printf("%d\n",0);
    }
}

int main(){

    struct LowerTriangleMatrix m=Create(4);

    int i,j;
    Display(m);
    int val=1;
    // for(i=1;i<m.size;i++){
    //     for(j=1;j<=i;j++){
    //         Set(&m,i,j,val);
    //     }    
    //     val++;
    // }
    Set(&m,1,1,5);
    // Set(&m,2,1,10);
    Set(&m,2,2,15);
    Set(&m,4,3,7);
    printf("After set \n");
    Display(m);

    printf("using get method\n");
    Get(m,2,1);
    Get(m,2,2);
    Get(m,2,3);
    Get(m,4,3);
    // Set(&m,2,2,6);
    // printf("After set \n");
    // Display(m);

    return 0;
}