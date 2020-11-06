#include<bits/stdc++.h>
using namespace std;

class Test
{
public:
    int a,b;
    void set_data(int a,int b) {
        this->a = a;
        this->b = b;
    }
    void get_data() {
        cout<<a<<" "<<b<<endl;
    }
};

int main()
{
    Test t1;
    t1.set_data(1,2);

    Test t2(t1);    //shallow copy using copy constructor
    Test t3 = t1;   //shallow copy using copy constructor
    Test t4;
    t4 = t1;        //shallow copy using assignment operator
    t2.get_data();
    t3.get_data();
    t4.get_data();
    return 0;
}