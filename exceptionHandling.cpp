#include<bits/stdc++.h>
using namespace std;

int main()
{
    cout<<"Before try"<<endl;
    int n = 10;
    int d = 0;
    try {
        if(d == 0) throw 10;
    }
    catch(...) {    //catches any type of exception
        cout<<"Exception caught"<<endl;
    }
    return 0;
}