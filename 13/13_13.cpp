#include <iostream>
#include <vector>
using namespace std;

struct X{
    X() { cout << "X()" << endl; }
    X(const X &) { cout << "X(const X&)" << endl; }
    X &operator=(const X &) {
        cout << "X operator=(const X&)" << endl;
        return *this;
    }
    ~X() { cout << "~X()" << endl; }
};

void f1(X x){
    cout << "X x" << endl;
}

void f2(const X &x){
    cout << "X &x" << endl;
}

int main(){
    X x1, x2;
    X x3(x1);
    x2 = x3;
    X *px = new X;
    f1(*px);
    f2(*px);
    vector<X> v;
    v.push_back(x1);
    v.push_back(*px);
    delete px;

    return 0;
}