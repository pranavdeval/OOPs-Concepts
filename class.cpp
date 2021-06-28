#include<bits/stdc++.h>
using namespace std;
//added a new comment
// added another comment

class Test
{
protected:
    int a,b;

public:
    static int var;

    Test(int a,int b) {
        var = a;            //Initializing static variable (no compilation error)
        this->a = a;
        this->b = b;
    }

    void setData(int a,int b) {
        var = a;        
        this->a = a;    //this refers to the pointer of current object
        this->b = b;
    }
    void getData() {
        cout<<a<<" "<<b<<endl;
    }
};

int Test :: var = 1;

int main()
{
    Test obj(5,2);
    cout<<Test :: var<<endl;

    //cout<<obj.a<<endl;   cannot access protected outside the class
    return 0;
}
