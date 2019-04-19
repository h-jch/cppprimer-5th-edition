#include <iostream>
using namespace std;

int func();

int main(){
    cout << func() << endl;
    cout << func() << endl;
    cout << func() << endl;
    cout << func() << endl;

    return 0;
}

int func(){
    static int x = 0;
    return x++;
}