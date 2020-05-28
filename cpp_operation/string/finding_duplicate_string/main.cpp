#include<stdio.h>

// this function will return boolean for result
bool containDuplicateChar(char *word){

    int long x,H=0;

    int i;
    for(i=0;word[i]!='\0';i++){
        x=1;

        // bit shifting depends on char ASCII code
        // but char must be substracted by 97 (for get the lower char)
        // so, this shifting for searching duplicate will able to detect case insensitive character
        x=x<<(word[i]-97);
        if((x&H)>0){
            return true;
        } else {
            H = H | x;
        }
    }

    return false;

}

int main(){

    // Must be false, because no duplicate char
    char a[]="jihad";
    printf("%s\n",containDuplicateChar(a)?"true":"false");

    // Must be true, because there is duplicate char
    // 'a' is duplicate char
    char b[]="mantap";
    printf("%s\n",containDuplicateChar(b)?"true":"false");

    
    // Must be false, because no duplicate char
    char c[]="Sikola";
    printf("%s\n",containDuplicateChar(c)?"true":"false");

    // Must be true, because there is duplicate char
    // 'L' or 'l' is duplicate char
    char d[]="Lily";
    printf("%s\n",containDuplicateChar(d)?"true":"false");

}