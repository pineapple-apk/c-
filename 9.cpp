#include<iostream>

using namespace std;

int main(){
    int age;
    cout<<"tell me your age "<<endl;
    cin>>age;

    //selection control structure: if, else-if, else ladder
   //if((age<18) && (age>=1)){
   //    cout<<"you cannot come to my party"<<endl;
   //}
   //else if(age==18){
   //    cout<<"you will get kid pass to the party"<<endl;
   //}
   //else if(age<1){
   //    cout<<"you are not yet born"<<endl;
   //}
   //else{
   //    cout<<"you can come to the party"<<endl;
   //}

   //selection control structure: switch case statements
   switch (age){
    case 18:
    cout<<"you are 18";
    break;
    case 22:
    cout<<"you are 22";
    break;
    case 2:
    cout<<"you are 2";
    break;

default:
cout<<"no special cases"<<endl;
break;
   }

    return 0;
}