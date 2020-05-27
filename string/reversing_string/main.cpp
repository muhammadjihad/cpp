#include<stdio.h>

// function for swap the target character
void swap(char &a,char &b){
    char temp;
    temp=a;
    a=b;
    b=temp;
}

// function for finding length of sentences
int findingCharLength(char *sentences){
    
    int count=0;
    int i;
    for(i=0;sentences[i]!='\0';i++){
        count++;
    }
    return count;
}

// function for perform reversing string
void reversingString(char *sentences){
    
    int length=findingCharLength(sentences);

    int i=0,j=length-1,middle=length/2;
    while(i<middle){
        swap(sentences[i],sentences[j]);
        i++;
        j--;
    }

}

int main(){

    char a[]="nama saya jihad";

    // Before reversed
    printf("%s\n",a);

    reversingString(a);

    // After reversed
    printf("%s",a);

    return 0;
}