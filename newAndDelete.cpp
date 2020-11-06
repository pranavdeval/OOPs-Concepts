#include<bits/stdc++.h>
using namespace std;

class Test
{
public:
    Test() {
        cout<<"Constructor Invoked!"<<endl;
    }
    ~Test() {
        cout<<"Destructor Invoked!"<<endl;
    }
};

int main()
{
    Test *p = new Test;                             //Constructor invoked
    //Test* p = (Test*)malloc(sizeof(Test));        //Constructor not invoked
    delete p;                                       //Destructor invoked
    //free(p);                                      //Destructor not invoked
    return 0;
}