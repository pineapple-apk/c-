#include<iostream>
using namespace std;

// inline int pro(int a, int b){
//     return a*b;
// }

int pro(int a, int b){
    static int c=0;   // runs only once
    c =c+1;
    return a*b+c;
}
float ca(float ba, float ir =1.04){
    return ba*ir;
}

int main(){
    int a,b;
    int money=100000;
    cout<<"enter the value of a and b: "<<endl;
    cin>>a>>b;
    cout<<"the product of a and b is: "<<pro(a,b)<<endl;
    cout<<"the product of a and b is: "<<pro(a,b)<<endl;
    cout<<"the product of a and b is: "<<pro(a,b)<<endl<<endl;

    cout<<"if you have rs"<<money<<" in your bank account\n you will recive rs"<<ca(money)<<" after 1 year"<<endl<<endl;
    cout<<"for VIP: if you have rs"<<money<<" in your bank account\n you will recive rs"<<ca(money , 1.1)<<" after 1 year"<<endl<<endl;

    return 0;
}