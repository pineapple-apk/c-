#include<iostream>
using namespace std;

class complex{
    int a,b;
    public:
    //creating a constructor
    //constructor is a special member function with same name as of the class. it is automatically invoked
    //it is used to initializ the object of its class
    complex(void); //constructor declaration

    void printnum(){
        cout<<"your number is "<<a<<"+"<<b<<"i"<<endl;
    }
};

complex :: complex(void){
    a=10;
    b=0;
}

int main(){
    complex c1,c2,c3;
    c1.printnum();
    c2.printnum();
    c3.printnum();
    
    return 0;
}