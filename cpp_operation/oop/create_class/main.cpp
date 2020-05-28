#include<stdio.h>
using namespace std;


// Create Class Syntax
class Rectangle{

    private:
    // Private attribute of class
        int length;
        int breadth;

    public:
    // Public attribute of class
    // Create constructor, so program can initialize
    // instance of Rectangle class
    Rectangle(int length,int breadth){
        this->length=length;
        this->breadth=breadth;
    }

    // Create public method so different class
    // can access this method/function of Rectangle class
    int area(){
        return this->length*this->breadth;
    }
    

};

int main(){

    // Initializing instance of Rectangle using constructor
    Rectangle r(10,5);

    // Using area method of 'r' instance
    printf("%d",r.area());

    return 0;
}