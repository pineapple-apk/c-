#include<iostream>

using namespace std;

int main(){
    double a,b;
    char o,x;
    bool run=true;
    do{
    
    cout<<"enter value of num1: "<<endl;
    cin>>a;
    cout<<"give the operator: "<<endl;
    cin>>o;
    cout<<"enter value of num2: "<<endl;
    cin>>b;
    switch(o){
        case '+':
        cout<<"the sum of "<<a<<" & "<<b<<" is: ";
        cout<<a+b<<endl<<endl;
        break;

        case '-':
        cout<<"the sub of "<<a<<" & "<<b<<" is: ";
        cout<<a-b<<endl<<endl;
        break;

        case '*':
        cout<<"the multiplication of "<<a<<" & "<<b<<" is: ";
        cout<<a*b<<endl<<endl;
        break;

        case '/':
        if (b!=0)
        cout<<"the devesion of "<<a<<" & "<<b<<" is: "<<a/b<<endl<<endl;
        else
        cout<<"cannot be devided"<<endl<<endl;
        break;

        default:
        cout<<"invalid operator"<<endl<<endl;
    }
    cout<<"do you want to use the calculator again y/n: "<<endl;
    cin>>x;
    if(x=='n'){
        run=false;
        continue;
    }
    if(x=='y'){
        run=true;
        continue;  
    }
    if(x!='y','n'){
        cout<<"invalid input calculator is running again: "<<endl<<endl;
        run=true;
        continue;  
    }
    }while(run);
return 0;
}