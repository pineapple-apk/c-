#include<iostream>
#include<iomanip>

using namespace std;

int main(){
    //int a = 34;
    //char c = 'b';
    //cout<<"the value of a was "<<a<<endl;
    //cout<<"the value of c was "<<c<<endl;
    //a=43;
    //c='4';
    //cout<<"the value of a is "<<a<<endl;
    //cout<<"the value of c is "<<c<<endl;

// ******************constant in c++*******************
    //const int a =3;
    //cout<<"the value of a was "<<a<<endl;
    //a=45; (you will get error sinse a is constant)
    //cout<<"the value of a was "<<a<<endl;

//*****************manipulator in c++******************
    //int a =3, b=78, c=1234;
    //cout<<"value of a without setw is: "<<a<<endl;
    //cout<<"value of b without setw is: "<<b<<endl;
    //cout<<"value of c without setw is: "<<c<<endl<<endl;
    //cout<<"value of a is: "<<setw(8)<<a<<endl;
    //cout<<"value of b is: "<<setw(8)<<b<<endl;
    //cout<<"value of c is: "<<setw(8)<<c<<endl;

    // **************operator precedence*******************
    int a=3, b=4;
    //int c=a*5+b;
    int c=((((a*5)+b)-45)+87);
    cout<<c;

    return 0;
}