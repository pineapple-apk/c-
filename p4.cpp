#include<iostream>
using namespace std;

int main(){
    int s=34;
    int g;
    cout<<"guess the number: "<<endl;
    while(g !=s ){
        cin>>g;
        if(g>s)
            cout<<"hint: number is smaller"<<endl;
        
        if(g<s)
            cout<<"hint: number is greater"<<endl;
        }
    cout<<"bingo!! you gussed correct";
    return 0;
}