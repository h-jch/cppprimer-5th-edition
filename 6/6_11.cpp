#include <iostream>
using namespace std;

void reset(int &);

int main(){
    int x;
    cin >> x;
    reset(x);
    cout << x << endl;

    return 0;
}

void reset(int &n){
    n = 0;
}