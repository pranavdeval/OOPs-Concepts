#include<bits/stdc++.h>
using namespace std;

void demo() 
{  
    static int count = 0;   //memory will be allocated only once for the entire program
    cout << count << " "; 
    
    count++;    
} 

class Test
{
    int a,b;
    static int c;

public:   
    void setData(int a,int b,int c) {
        this->a = a;
        this->b = b;
        Test::c = c;
    }

    void getData() {
        cout<<a<<" "<<b<<" "<<c<<endl;
    }
};
int Test::c = 5;    //Definition (Without this we will get an error)
int main()
{
    Test obj;
    obj.setData(1,2,3);
    obj.getData();
    return 0;
}