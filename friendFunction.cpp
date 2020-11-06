#include<bits/stdc++.h>
using namespace std;

class Test
{
private:
    int a,b;
    friend void friendFun(Test);
public:
    Test(int a,int b) {
        this->a = a;
        this->b = b;
    }

    
};

void friendFun(Test obj)
{
    cout<<"Private members can be accessed through friend functions"<<endl;
    cout<<obj.a<<" "<<obj.b<<endl;
}

int main()
{
    Test t(1,2);
    friendFun(t);
    return 0;
}