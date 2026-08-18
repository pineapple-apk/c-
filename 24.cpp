#include<iostream>
using namespace std;

class employee{
    int nu;
    static int count;
    public:
        void setdata(void){
            cout<<"enter employee number: "<<endl;
            cin>>nu;
            count++;
        }
        void getdata(void){
            cout<<"the id of employee is "<<count<<" and this is employee no. "<<nu<<endl;
        }

        static void getcount(void){
            cout<<"the value of count is "<<count<<endl<<endl;
        }
};

int employee:: count=1000;  //the variable is static so it's default value is 0

int main(){
    employee pineapple;
    employee banana;
    employee aloo;
    //pineapple.nu = 1;
    //pineapple.count= 1;   //cannot do this caus id and count are private

    pineapple.setdata();
    pineapple.getdata();
    employee::getcount();
    
    banana.setdata();
    banana.getdata();
    employee::getcount();
    
    aloo.setdata();
    aloo.getdata();
    employee::getcount();
    
    return 0;
}