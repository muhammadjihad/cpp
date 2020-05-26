#include<stdio.h>
using namespace std;

class Rectangle{

    private:
        int length;
        int breadth;
    
    public:
        Rectangle();
        Rectangle(int length,int breadth);
        int area();
        void changeLength(int newLength);
        int adder(int x);

};

Rectangle::Rectangle(int length,int breadth){
    this->length=length;
    this->breadth=breadth;
}

Rectangle::Rectangle(){
    this->length=0;
    this->breadth=0;
}

void Rectangle::changeLength(int newLength){
    this->length=newLength;
}

int Rectangle::area(){
    return this->length*this->breadth;
}

int Rectangle::adder(int x){
    return x+5;
}

int main(){

    Rectangle x;
    Rectangle r(5,4);

    printf("%d\n",r.area());

    printf("%d",x.adder(2));

    return 0;
}