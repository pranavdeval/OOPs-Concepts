#include<bits/stdc++.h>
using namespace std;

class Animal
{
public:
    virtual void fun() {
        cout<<"Animal class function!"<<endl;
    }
};

class Dog : public Animal 
{
public:
    //overrided
    void fun() {
        cout<<"Dog class function!"<<endl;
    }
};

int main()
{
    Animal *p = new Dog;
    Animal *q = new Animal;
    p->fun();
    q->fun();
    return 0;
}

/*
 Virtual Function : Virtual functions are called according to the type of the 
                    object instance pointed to or referenced, not according to the
                    type of the pointer or reference.
*/