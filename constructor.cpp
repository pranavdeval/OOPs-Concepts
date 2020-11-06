#include<bits/stdc++.h>
using namespace std;

class Test
{
    int a,b;
public:
    Test() {
        a = 0;
        b = 0;
        cout<<"Default Consructor"<<endl;
    }
    Test(int a,int b) { //Parameterized constructor
        this->a = a;
        this->b = b;
        cout<<a<<" "<<b<<endl;
    }
    ~Test() {
        cout<<"Object Destructed!"<<endl;
    }
};


int main()
{
    Test obj;
    Test obj2(1,2);
    return 0;
}