#include<iostream>
using namespace std;

int sum(int a, int b){
int c= a+b;
return c;
}

// call by reference using pointers
void swapp(int* a, int* b){  //temp a b
    int temp = *a;           // 6   6 7
    *a = *b;                 // 6   7 7
    *b = temp;               // 6   7 6
}
// call by reference using reference variable
int & swapr(int &a, int &b){  //temp a b
    int temp = a;            // 6   6 7
    a = b;                   // 6   7 7
    b = temp;                // 6   7 6
    return b;
}

int main(){
    int a=6, b=7;
    cout<<"the value of a and b are "<<a <<" and "<<b<<endl;

    swapp(&a,&b); //swap using pointers
    cout<<"the value of a and b are "<<a <<" and "<<b<<endl;

    swapr(a,b); //swap using reference variable
    cout<<"the value of a and b are "<<a <<" and "<<b<<endl;

    swapr(a,b) = 67; //can be edited if return is added (return b;)
    cout<<"the value of a and b are "<<a <<" and "<<b<<endl;
    return 0;
}

//if void no need to add return
//if int add return