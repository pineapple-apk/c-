// array 
#include<iostream>
using namespace std;

int main(){
    int marks[5] = {23,32,45,67,89};
    cout<<marks[0]<<endl;
    cout<<marks[1]<<endl;
    cout<<marks[2]<<endl;
    cout<<marks[3]<<endl;
    cout<<marks[4]<<endl;
    //you can change value of array
    marks[2]=46;
    cout<<marks[2]<<endl;

    for (int i = 0; i <= 4; i++)
    {
        cout<<"the value of marks["<<i<<"] is "<<marks[i]<<endl;
    }
    
    // pointers and arrays
    int* p= marks;
    cout<<"the value of *(p+0) is "<<*(p+0)<<endl;
    cout<<"the value of *(p+1) is "<<*(p+1)<<endl;
    cout<<"the value of *(p+2) is "<<*(p+2)<<endl;
    cout<<"the value of *(p+3) is "<<*(p+3)<<endl;
    cout<<"the value of *(p+4) is "<<*(p+4)<<endl;
    cout<<*p<<endl;
    cout<<"p++ is "<<*(p++)<<endl;
    cout<<"p is "<<*(p)<<endl;
    cout<<"++p is "<<*(++p)<<endl;
    cout<<"+p is "<<*(+p)<<endl;
    
    return 0;
}