#include<bits/stdc++.h>
using namespace std;

class Test
{
    const int a;    //cannot be initialized here
    int &ref;       //cannot be initialized here
public:
    Test(int &x) : a(5),ref(x)  //initializer list
    {}
    void get() {
        cout<<a<<" "<<ref<<endl;
    }
};

int main()
{
    int ref = 2;
    Test obj(ref);

    obj.get();
    return 0;
}

/*
1)  Non-static const data members cannot be initialized in constructors.
2)  Reference variables cannot be initialized in constructors.
3)  For the above two scenarios we must use initializer list.
*/