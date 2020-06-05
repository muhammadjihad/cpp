#include<stdio.h>

struct Element{
    int i;
    int j;
    int val;
};

struct SparseMatrix{
    int m;
    int n;
    int nums;
    struct Element *elem;
};

void Create(struct SparseMatrix *m){
    printf("Enter Dimension\n");
    scanf("%d%d",&m->m,&m->n);
    printf("Enter total of non zero elements\n");
    scanf("%d",&m->nums);

    m->elem=new Element[m->nums];

    int i;
    printf("Enter non zero element(s)");

    for(i=0;i<m->nums;i++){
        scanf("%d%d%d",&m->elem[i].i,&m->elem[i].j,&m->elem[i].val);
    }
}

void Display(struct SparseMatrix m){

    int i,j,k=0;
    for(i=0;i<m.m;i++){
        for(j=0;j<m.n;j++){
            if(i == m.elem[k].i && j == m.elem[k].j){
                printf("%d ",m.elem[k++].val);
            } else {
                printf("0 ");
            }
        }
        printf("\n");
    }

}

void Add(struct SparseMatrix s1,struct SparseMatrix s2){
    
}

int main(){

    struct SparseMatrix m;
    Create(&m);

    Display(m);
    

    return 0;
}