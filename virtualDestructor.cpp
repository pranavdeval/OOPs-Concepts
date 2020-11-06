#include<bits/stdc++.h>
using namespace std;

class Base
{
public:
    Base() {
        cout<<"Base class constructor"<<endl;
    }
    virtual ~Base() {   //see the ouput also by removing the virtual keyword
        cout<<"Base class destructor"<<endl;
    }
};

class Derived : public Base
{
public:
    Derived() {
        cout<<"Derived class constructor"<<endl;
    }
    ~Derived() {
        cout<<"Derived class destructor"<<endl;
    }
};

int main()
{
    Base *p = new Derived;
    delete p;
    
    return 0;
}