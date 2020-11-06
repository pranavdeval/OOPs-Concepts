#include<bits/stdc++.h>
using namespace std;

//Abstract class
class Base
{
public:
    virtual void fun()=0;   //pure vitual function
};


class Derived : public Base
{
public:
void fun1() {
    cout<<"fun1"<<endl;
}
};

//One of the Derived class must override the pure virtual function
class Derived2 : public Derived
{
public:
    void fun() {
        cout<<"Overrided"<<endl;
    }
};

int main()
{
    Base *p = new Derived2;
    //Base* q =  new Derived; Error(Since not implemented the pure virtual function)
    p->fun();
    //q->fun1(); Error
    return 0;
}

/*
1)A class containing atlwast one pure virtual function is known as abstract class.
2)We can only create objects for only those derived classes
which have implemented the pure virtual function.
*/