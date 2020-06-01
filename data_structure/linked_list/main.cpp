#include<stdio.h>

// Node structure
struct Node {
    int val;
    int length;
    struct Node *node;
};

// Function for append or add on last linked list
void Append(struct Node *node,int val){
    struct Node* appendNode;
    appendNode=new Node();
    appendNode->val=val;
    appendNode->node=NULL;
    while(node->node != NULL){
        node=node->node;
    }
    node->node=appendNode;
}

// Function for display all of element in linked list
void Display(struct Node *node){
    while(node->node != NULL){
        printf("%d with address %p binding to %p\n",node->val,node,node->node);
        node=node->node;
    }
    printf("%d with address %p binding to %p\n\n",node->val,node,node->node);
}

// Get length of linked list
int Length(struct Node node){
    int count=0;

    while(node.node != NULL){
        count++;
        node=*node.node;
    }
    count++;
    return count;
}

// Get element on specific index in linked list
int Get(struct Node node,int index){
    int i;
    for(i=0;i<index;i++){
        node=*node.node;
    }
    return node.val;
}

// Add node to first node position linked list
void Prepend(struct Node *node,int val){
    struct Node *appendNode=new Node();
    appendNode->val=node->val;
    appendNode->node=node->node;
    node->val=val;
    node->node=appendNode;
}

// Update element in specific node position
void Update(struct Node *node,int index,int val){
    int i;
    for(i=0;i<index;i++){
        node=node->node;
    }
    node->val=val;
}

void Insert(struct Node *node,int index,int val){
    int i;

    struct Node *tmp;
    if(index != 0){
        for(i=0;i<index-1;i++){
        node=node->node;
    }
        tmp=node->node;

        struct Node *appendNode=new Node();
        appendNode->val=val;
        appendNode->node=tmp;
        node->node=appendNode;
    }
    
}

int main(){

    struct Node node={10,NULL};
    Append(&node,9);
    Append(&node,12);
    Append(&node,56);
    Append(&node,34);

    Display(&node);

    int indexZero=Get(node,1);
    printf("%d\n",indexZero);

    Insert(&node,1,17);
    Display(&node);

    Insert(&node,1,23);
    Display(&node);

    Update(&node,1,22);
    Display(&node);

    Prepend(&node,18);
    Display(&node);

    return 0;
}