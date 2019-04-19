#include <iostream>
using namespace std;

int ab(int n);

int main(){
    int x;
    cin >> x;
    cout << ab(x) << endl;

    return 0;
}

int ab(int n){
    return n > 0 ? n : -n;
}