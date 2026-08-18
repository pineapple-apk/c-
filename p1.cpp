#include<iostream>

using namespace std;

int main(){
    int i =1;
    int t,n;
    cout<<"what table you want"<<endl;
    cin>>t;
    cout<<"till how much you want"<<endl;
    cin>>n;
    cout<<"hear is your table of "<<t<<" till "<<n<<endl;
    do{
        cout<<i*t<<endl;
        i++;
    }while(i<=n);

return 0;
}