#include <iostream>
using namespace std;

void func();

int main(){
    func();
    return 0;
}

void func(){
    int x, ans = 1;
    cin >> x;
    while(x>1){
        ans *= x;
        x--;
    }
    cout << ans << endl;
}