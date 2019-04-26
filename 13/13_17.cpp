#include <iostream>
using namespace std;

class numbered{
public:
    numbered(int i=0):mysn(i){}
    numbered(const numbered &rhs){  //13.15
        mysn = rhs.mysn + 1;
    }

    int mysn;
};
/*  13.14
void f(numbered s){
    cout << s.mysn << endl;
}
*/  //13.16
void f(const numbered &s){
    cout << s.mysn << endl;
}

int main(){
    numbered a, b = a, c = b;
    f(a);
    f(b);
    f(c);

    return 0;
}