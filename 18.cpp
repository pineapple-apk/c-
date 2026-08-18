#include<iostream>
using namespace std;

int factorial(int n){
    if(n<=1){
        return 1;
    }
    return n*factorial(n-1);
}

int fib(int m){
    if(m<2){
        return 1;
    }
    return fib(m-1)+fib(m-2);
}
int main(){
    int a;
    // factorial of a number:
    // 6! = 6*5*4*3*2*1 = 720
    // 0! = 1 by defination
    // 1! = 1 by defination
    // n! = n*(n-1)!

    cout<<"enter a number: "<<endl;
    cin>>a;
    cout<<"the factorial of "<<a<<" is "<<factorial(a)<<endl;
    cout<<"the term in fibonacci sequence at position "<<a<<" is "<<fib(a)<<endl;
    
    return 0;
}