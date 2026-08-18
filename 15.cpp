#include<iostream>
using namespace std;

int sum(int , int );
void g();

int main(){
    int num1, num2;
    // num1 and num2 are actual parameter
    cout<<"enter the num1: "<<endl;
    cin>>num1;
    cout<<"enter the num1: "<<endl;
    cin>>num2;
    cout<<"the sum is: "<<sum(num1, num2)<<endl;
    g();
    
    return 0;
}
int sum(int a, int b){
    int c= a+b;
    return c;
}
// int a and b are formal parameters
void g(){
    cout<<"you are gay "<<endl;
}