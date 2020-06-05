#include<stdio.h>

struct Node{
    int val;
    struct Node *next;
};

void Display(struct Node node){
    while(node.next){
        printf("%d\n",node.val);
        node=*node.next;
    }
    printf("%d\n",node.val);
}

void Append(struct Node *node,int val){
    struct Node *appendNode=new Node[1];
    appendNode->val=val;
    appendNode->next=NULL;
    while(node->next != NULL){
        node=node->next;
    }
    node->next=appendNode;
}


void Concatenate(struct Node *node1,struct Node *node2){
    while(node1->next){
        node1=node1->next;
    }
    node1->next=node2;
}

int main(){
    
    struct Node first={1,NULL};
    
    Append(&first,5);
    Append(&first,6);
    Append(&first,9);

    struct Node second={15,NULL};

    Append(&second,12);
    Append(&second,18);
    Append(&second,19);

    Display(first);
    printf("====\n");
    Display(second);
    printf("====\n");
    Concatenate(&first,&second);
    Display(first);

    return 0;
}