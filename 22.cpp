#include <iostream>
#include <string>
#include <cstdlib>
using namespace std;

class binary
{
private:
    string s;
    void chk_bin(void);

public:
    void read(void);
    void ones_compliment(void);
    void display(void);
};

void binary ::read(void)
{
    cout << "enter a binary number "<<endl;
    cin >> s;
}

void binary ::chk_bin(void)
{
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) != '0' && s.at(i) != '1')
        {
            cout <<endl<< "incorrect binary formate" << endl;
            exit(0);
        }
    }
}

void binary ::ones_compliment(void)
{
    chk_bin();
    for (int i = 0; i < s.length(); i++)
    {
        if (s.at(i) == '0')
        {
            s.at(i) = '1';
        }
        else
        {
            s.at(i) = '0';
        }
    }
}

void binary ::display(void)
{
    cout <<endl << "displaying your binary number " << endl;
    for (int i = 0; i < s.length(); i++)
    {
        cout << s.at(i);
    }
}

int main()
{
    // OOPs - class and objects
    // c++ --> initally called c with classes by stroustroup
    // class --> extension of structures (in c)
    // structures had limitations
    //      - members are public
    //      - no methods
    // classes --> structures + more
    // classes can have methods and properties
    // classes can make few members as private and few as public
    // structures in c++ are typedefed
    // you can declare objects along with yhe calss declration
    /* class Employee{
        // Class definition
    } papaya, pineapple, hayato; */
    // pineapple.salary = 67 --> makes no sense if salary is private

    // Nesting of member functions
    binary b;
    b.read();
    //b.chk_bin();  //cant use it hear caus its private function
    b.display();
    b.ones_compliment();
    b.display();

    return 0;
}