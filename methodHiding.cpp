#include<bits/stdc++.h>
using namespace std;

class Base
{
public:
    void fun() {
        cout<<"Base class fun()"<<endl;
    }
};

class Derived : public Base
{
public:
    void fun(int i) {
        cout<<"Derived class fun(int) "<<i<<endl;
    }
    using Base::fun;
};

int main()
{
    Derived o1;
    o1.fun();   //Does not find in Derived. Furthur looks in Base due to using::Base fun;
    o1.fun(5);  //Lookup successful in Derived 
    return 0;
}