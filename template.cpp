#include<bits/stdc++.h>
using namespace std;

//function template
template <class X>
X big(X a,X b)
{
    if(a > b) return a;
    return b;
}


int main()
{
    cout<<big(1.2,2.2)<<endl;
    cout<<big(1,2)<<endl;
    return 0;
}