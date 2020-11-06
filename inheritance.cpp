#include<bits/stdc++.h>
using namespace std;

//==============================================================================
/*
1)  When we create a parameterized constructor for a class , then its default 
    constructor gets removed.
2)  When a child class object is created , the constructors are executed from
    parent to child.
3)  If we dont explicitly call the parent class contructor , then the compiler
    will defaultly call the parent class's default constructor(which may not be
    there if we already defined a parameterized constructor in the parent class
    and thus causing an error).
4)  So if there is a parameterized constructor in the parent class, it is our
    responsibility to call the parent class's constructor from its child class's
    constructor.
    Syntax : Child(...) : Par1(...),Par2(...) {}
    ... = 0 or any arguments.
*/

class Base1
{
    int a;
public:
    Base1() {
        cout<<"Base1 class default constructor"<<endl;
    }
    Base1(int k) {
        cout<<"Base1 class parameterized constructor"<<endl;
        a = k;
    }
};

class Base2
{
    int b;
public:
    Base2(int k) {
        cout<<"Base2 class parameterized constructor"<<endl;
        b = k;
    }
};

class Derived : public Base2,public Base1
{
public:
    Derived() : Base1(5) , Base2(6){
        cout<<"Child class constructor"<<endl;
    }
};

int main()
{
    Derived d;
    return 0;
}

/*
                    Base1   Base2
                      \       /  
                       \     /
                       Derived
*/

//==============================================================================

