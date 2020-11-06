#include<bits/stdc++.h>
using namespace std;

class Base
{
    int x;
    mutable int y;
public:
    Base(int a,int b) : x(a),y(b) {}

    void get_data() const{  
        y = 10;
        //x = 2; error because x is not mutable
        //only mutable variables can be changed in const member functions
    }
};

int main()
{
    Base b(1,2);
    b.get_data();
    return 0;
}

/*
1)const member function : In const member function any value cannot be modified 
                          until the variable is of type mutable.
                          It is also known as read only function.  

*/