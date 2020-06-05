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

int getLastElement(struct Node node){
    while(node.node){
        node=*node.node;
    }
    return node.val;
}

int Sum(struct Node node){
    int total=0;
    while(node.node){
        total=total+node.val;
        node=*node.node;
    }
    total=total+node.val;
    return total;
}

int Count(struct Node node){
    int count=1;
    while(node.node){
        count++;
        node=*node.node;
    }
    return count;
}

int Max(struct Node node){
    int max=0;
    while(node.node){
        if(node.val>max){
            max=node.val;
        }
        node=*node.node;
    }
    if(node.val>max){
        max=node.val;
    }
    return max;
}

bool LinearSearch(struct Node node, int value){
    while(node.node){
        if(node.val == value)
            return true;
        node=*node.node;
    }
    return false;
}

bool IsSorted(struct Node node){
    while(node.node){
        if(node.val > (*node.node).val){
            return false;
        }
        node=*node.node;
    }
    return true;
}

void RemoveDuplicateElements(struct Node *node){
    while(node->node){
        if(node->val == node->node->val){
            node->node=node->node->node;
        }else{
            node=node->node;
        }
    }
}

void Reverse(struct Node *node){
    int *auxArr;
    auxArr=new int[Count(*node)];
    int i=0;
    struct Node *first=node;
    while(node->node){
        auxArr[i++]=node->val;
        node=node->node;
    }
    auxArr[i]=node->val;

    while(first->node){
        first->val=auxArr[i--];
        first=first->node;
    }
    first->val=auxArr[i];
} 

int main(){

    struct Node node={2,NULL};
    Append(&node,9);
    Append(&node,12);
    Append(&node,56);
    Append(&node,74);
    Append(&node,74);
    Append(&node,74);
    Append(&node,70);

    Display(&node);

    int indexZero=Get(node,1);
    printf("%d\n",indexZero);

    // Insert(&node,1,17);
    // Display(&node);

    // Insert(&node,1,23);
    // Display(&node);

    // Update(&node,1,22);
    // Display(&node);

    // Prepend(&node,18);
    // Display(&node);

    printf("\n");

    int lastElement=getLastElement(node);
    printf("%d\n",lastElement);

    int sumOfLinkedList=Sum(node);
    printf("%d\n",sumOfLinkedList);

    int countOfLinkedList=Count(node);
    printf("%d\n",countOfLinkedList);

    int maxOfLinkedList=Max(node);
    printf("%d\n",maxOfLinkedList);

    bool isThere4=LinearSearch(node,4);
    printf("%s\n",isThere4 ? "true":"false");

    bool isThere9=LinearSearch(node,9);
    printf("%s\n",isThere9 ? "true":"false");

    bool isSortedLinkedList=IsSorted(node);
    printf("%s\n",isSortedLinkedList ? "true":"false");

    RemoveDuplicateElements(&node);
    Display(&node);

    Reverse(&node);
    Display(&node);
    
    return 0;
}