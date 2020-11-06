#include<bits/stdc++.h>
using namespace std;

class Test
{
public:
    int *p;
    int a,b;

    Test() {
        p = new int;
    }
    Test(const Test &t) {   //Deep copy using self implemented copy constructor
        a = t.a;
        b = t.b;
        p = new int;
        *p = *(t.p);    //assigning value
    }
    ~Test() {   
        delete p;
    }
    void set_data(int x,int y,int z) {
        a = x;
        b = y;
        *p = z;
    }

    void get_data() {
        cout<<a<<" "<<b<<" "<<*p<<endl;
    }
};

int main()
{
    Test t1;
    t1.set_data(1,2,3);

    Test t2(t1);    //Deep copy using self implemented copy constructor

    t1.get_data();
    t2.get_data();

    return 0;
}
