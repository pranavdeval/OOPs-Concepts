#include<bits/stdc++.h>
using namespace std;

class Complex
{
    int a,b;
public:
    void set_data(int a,int b) {
        this->a = a;
        this->b = b;
    }
    void get_data() {
        cout<<a<<" "<<b<<endl;
    }

    //Overloading binary operator
    Complex operator +(Complex c) {     //operator overloading
        Complex temp;
        temp.a = a + c.a;
        temp.b = b + c.b;
        return temp;
    }
    //Overloading unary operator
    Complex operator -() {
        Complex temp;
        temp.a = -a;
        temp.b = -b;
        return temp;
    }
};

class Matrix
{
public:
    int n,m;
    vector<vector<int>> mat;


    Matrix(int n,int m) {
        this->n = n;
        this->m = m;
        mat.resize(n,vector<int>(m,0));
    }

    void input() {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cin>>mat[i][j];
            }
        }
    }

    void display() {
        for(int i=0;i<n;i++) {
            for(int j=0;j<m;j++) {
                cout<<mat[i][j]<<" ";
            }
            cout<<endl;
        }
    }

    Matrix operator *(Matrix temp) {
        int n1 = temp.n;
        int m1 = temp.m;
        //m  must beequal to n1(to multiply)
        Matrix res(n,m1);

        for(int i=0;i<n;i++) {
            for(int j=0;j<m1;j++) {
                res.mat[i][j] = 0;
                for(int k=0;k<m;k++) {
                    res.mat[i][j] += mat[i][k]*temp.mat[k][j];
                }
            }
        }
        return res;
    }
};

int main()
{
    /*
    Complex c1,c2;
    c1.set_data(1,2);
    c2.set_data(2,3);
    Complex c3 = c1 + c2;   //c1 is caller object and c2 is parameter
    c3.get_data();
    c3 = -c3;               //c3 is caller object
    c3.get_data(); */

    Matrix m1(1,2);
    Matrix m2(2,1);
    m1.input();
    m2.input();

    m1 = m1*m2;

    m1.display();

    return 0;
}