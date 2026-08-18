#include<iostream>

using namespace std;

int c=2;
int main(){
// ***************built in data type******************* //

    //int a, b, c, d;
    //
    //cout<<"enter value of a"<<endl;
    //cin>>a;
    //cout<<"enter value of b"<<endl;
    //cin>>b;
    //c = a+b;
    //cout<<"the sum is "<<c<<endl
    //<<"the global c is "<<::c<<endl
    //<<"enter the value of d ";
    //cin>>d;
    //cout<<"the value of c-d is "<<c-d<<endl
    //<<"the value of global c-d is "<<::c-d<<endl;
    
    
// **********float, double and long double literal**********// 
    //cout<<"the size of 98.5 is "<<sizeof(98.5)<<endl;
    //cout<<"the size of 98.5f is "<<sizeof(98.5f)<<endl;
    //cout<<"the size of 98.5F is "<<sizeof(98.5F)<<endl;
    //cout<<"the size of 98.5l is "<<sizeof(98.5l)<<endl;
    //cout<<"the size of 98.5L is "<<sizeof(98.5L)<<endl;


// ******************reference variables*******************//
    float p=445;
    float & q=p;
    cout<<p<<endl;
    cout<<q<<endl;

// *******************typecasting********************* //
    int l=45;
    float m=45.46;
    cout<<"the value of int l is "<<(int)l<<endl;
    cout<<"the value of int m is "<<(int)m<<endl;
    cout<<"the value of float l is "<<(float)l<<endl;
    cout<<"the value of float m is "<<(float)m<<endl;

    int n= int(m);
    cout<<"the value of n is "<<n<<endl;

    cout<<"the value of l+m is "<<l+m<<endl;
    cout<<"the value of l+int(m) is "<<l+int(m)<<endl;
    cout<<"the value of l+(int)m is "<<l+(int)m<<endl;
    
    return 0;
}