// there are two type of headerfile
// 1. system header file: it comes with system
#include<iostream>

// 2. user header file: it is made by user
// #include<one.h> 
//one.h is a file name which is present in diractory

using namespace std;

int main(){
    int a=5, b=2;
    cout<<"operators in c++"<<endl;
    cout<<"followings are type of operators in c++"<<endl;
    //arithmetic operators
    cout<<"the value of A+B is: "<<a+b<<endl;
    cout<<"the value of A-B is: "<<a-b<<endl;
    cout<<"the value of A*B is: "<<a*b<<endl;
    cout<<"the value of A/B is: "<<a/b<<endl;
    cout<<"the value of A%B is: "<<a%b<<endl;
    cout<<"the value of A++ is: "<<a++<<endl;
    cout<<"the value of A-- is: "<<a--<<endl;
    cout<<"the value of A-- is: "<<a--<<endl;
    cout<<"the value of ++A is: "<<++a<<endl;
    cout<<"the value of --A is: "<<--a<<endl;

    //assignment operators- used to assign value to variables
    //int a=3, b=4;
    //char d='d';
    
    //comparision operators
    cout<<"following are comprasion operattors"<<endl;
    cout<<"the value of a==b is "<<(a==b)<<endl;
    cout<<"the value of a!=b is "<<(a!=b)<<endl;
    cout<<"the value of a>b is "<<(a>b)<<endl;
    cout<<"the value of a<b is "<<(a<b)<<endl;
    cout<<"the value of a>=b is "<<(a>=b)<<endl;
    cout<<"the value of a<=b is "<<(a<=b)<<endl;

    //logical operators
    cout<<"following are logical operators"<<endl;
    cout<<"the value of (and)((a==b) && (a<b)) is "<<((a==b) && (a<b))<<endl;
    cout<<"the value of (or)((a==b) || (a>b)) is "<<((a==b) || (a>b))<<endl;
    cout<<"the value of (not)(!(a==b)) is "<<(!(a==b))<<endl;
    
    return 0;
}