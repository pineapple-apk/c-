#include<iostream>
using namespace std;

class complex; //pre declaration

class calculator{
    public:
        int add(int a, int b){
            return (a+b);
        }

        int sumrealcomplex(complex, complex);
        int sumcompcomplex(complex, complex);
};

class complex{
    int a, b;
    //indivisual friend decleration

    /*friend int calculator :: sumrealcomplex(complex o1, complex o2);
    friend int calculator :: sumcompcomplex(complex o1, complex o2);*/

    //aliter: declaring the entire class af friend at once

    friend class calculator;

    public:
        void setnum(int n1, int n2){
            a =n1;
            b =n2;
        }
        
        void printnum(){
            cout<<"your number is "<<a<<" + "<<b<<"i"<<endl;
        }
};

int calculator :: sumrealcomplex(complex o1, complex o2){
    return (o1.a + o2.a);
}
int calculator :: sumcompcomplex(complex o1, complex o2){
    return (o1.b + o2.b);
}

int main(){
    complex o1, o2;
    o1.setnum(1,4);
    o2.setnum(5,7);

    calculator calc;
    int re = calc.sumrealcomplex(o1,o2);
    int co = calc.sumcompcomplex(o1,o2);
    cout<<"the result of sum of real part of o1 and o2 is "<<re<<endl;
    cout<<"the result of sum of complex part of o1 and o2 is "<<co<<endl;
    
    return 0;
}