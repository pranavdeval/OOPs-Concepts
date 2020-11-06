#include<bits/stdc++.h>
using namespace std;


class Animal
{
public:
    void fun() {
        cout<<"Animal class function"<<endl;
    }
};

class Dog: public Animal
{
public:
    //overrided
    void fun() {
        cout<<"Dog class function"<<endl;
    }
};

int main()
{
    Animal* p = new Dog;    //here p is referring to the object of class Dog
    p->fun();
    return 0;
}

/*
->  As shown above if we try to access fun() with p, even though p is referring 
    to object of Dog class , it calls the Animal class fun() instead.
->  This is due to compile time binding or early binding.
->  In early binding the compiler sees that p is a pointer of type Animal
    so it calls fun() of Animal class instead.
*/