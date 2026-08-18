#include<iostream>

using namespace std;

int main(){
    /*loops in c++:
    there are 3 types of loop in c++:
      1. for loop
      2. while loop
      3. do while loop
      */
    
    /*for loop in c++

    for(initialisation; condition; updation)
    {
        loop body(c++ code)
    }*/

    for (int i = 1; i <= 2; i++)
    {
        cout<<i<<endl;
    }


/*while loop in c++*/

int i=1;
    //while(i<=3){
    //    cout<<i<<endl;
    //    i++;
    //}

/*do while loop in c++*/

    
    do{
        cout<<i<<endl;
        i++;
    }while(i<=4);

    return 0;
}