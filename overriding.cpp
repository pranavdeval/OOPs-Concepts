#include<bits/stdc++.h>
using namespace std;

class Parent
{
public:
    void fun1() {

    }
    void fun2() {

    }
};

class Child : public Parent
{
public:
    void fun1() {       //method overriding

    }
    void fun2(int x) {  //method hiding

    }
};

int main()
{
    Child obj;
    obj.fun1();     //calls fun1() of Child class
    obj.fun2();     //Compilation Error due to compile time binding
    obj.fun2(5);    //calls fun2(int) of Child class

    return 0;
}


/*
Method Overloading  :   Methods having same name but different arguments and
                        lying in the same scope.
Method Hiding       :   If a child class redifines the parent class method
                        then all the parent class methods with the same name
                        becomes hidden in the child class.
                        (All the overloaded functions in the parent class gets 
                        hidden in the child class)
Method Overriding   :   Defining the same function with same signature in
                        both parent class and child class is known as 
                        method overriding.
*/