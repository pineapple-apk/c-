#include<iostream>
using namespace std;

class employee{
    int nu;
    int salary;
    static int count;
    public:
        void setnu(void){
            salary = 9999;
            cout<<"enter employee number: "<<endl;
            cin>>nu;
            count++;
        }
        void getnu(void){
            cout<<"the id of employee number "<<nu<<" is "<<count<<endl;
        }
};

int employee::count=1000;

int main(){
    //employee pineapple, papaya, lemon, banana;
    //pineapple.setnu();
    //pineapple.getnu();
    employee fr[4];
    for (int i=0; i<4; i++)
    {
        fr[i].setnu();
        fr[i].getnu();
    }
    return 0;
}