//structure

#include<iostream>
using namespace std;

typedef struct employee
{
    int eId;
    char favChar;
    float salary;
} ep;
union money
{
    int rice;
    char car;
    float pounds;
};

int main(){
    ep pineapple;
    struct employee car;
    union money m1;
    m1.car= 'b';
    pineapple.eId= 1;
    pineapple.favChar= 'a';
    pineapple.salary= 1200000;

    cout<<pineapple.eId<<endl;
    cout<<pineapple.favChar<<endl;
    cout<<pineapple.salary<<endl;
    cout<<m1.car<<endl;


    enum meal{breakfast, lunch, dinner};
    meal s= lunch;
    cout<<s<<endl;
    cout<<(s==2)<<endl;
    cout<<breakfast<<endl;
    cout<<lunch<<endl;
    cout<<dinner<<endl;
    
    return 0;
}