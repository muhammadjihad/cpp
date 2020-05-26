#include<stdio.h>
using namespace std;


// Create Template class Syntax
template<class T>
class Rectangle{
    private:
        T length;
        T breadth;
    public:
        Rectangle(T length,T breadth);
        T area();
};

template<class T>
Rectangle<T>::Rectangle(T length,T breadth){
    this->length=length;
    this->breadth=breadth;
}

template<class T>
T Rectangle<T>::area(){
    return this->length*this->breadth;
}

int main(){

    // Case when Rectangle instances is integer attribute
    Rectangle<int> r(10,50);
    printf("%d\n",r.area());
    
    // Case when Rectangle instances is float attribute
    Rectangle<float> s(2.6,1.8);
    printf("%f",s.area());

    return 0;
}