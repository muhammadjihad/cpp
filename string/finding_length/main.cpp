#include<stdio.h>

int findingCharLength(char *sentences){
    
    int count=0;
    int i;
    for(i=0;sentences[i]!='\0';i++){
        count++;
    }
    return count;
}

int main(){

    char a[]="nama saya jihad";

    printf("%d",findingCharLength(a));

    return 0;
}