#include<iostream>
using namespace std;

int sum( int a, int b){
    cout<<"using function with 2 arguments ";
    return a+b;
}
int sum( int a, int b, int c){
    cout<<"using function with 3 arguments ";
    return a+b+c;
}
int vol(double r, int h){
    return 3.14*r*r*h;
}
int vol(int a){
    return a*a;
}
int vol(int l, int b, int h){
    return l*b*h;
}

int main(){
    cout<<"the sum of 3 and 8 is "<<sum(3,8)<<endl;
    cout<<"the sum of 3, 6 and 8 is "<<sum(3,6,8)<<endl;
    cout<<"the volume of cylinder is "<<vol(3,6)<<endl;
    cout<<"the volume of cube is "<<vol(3)<<endl;
    cout<<"the volume of cuboide is "<<vol(3,6,4)<<endl;
    
    return 0;
}