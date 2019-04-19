#include <iostream>
using namespace std;

int fact(int n){
    int ans = 1;
    while(n>1)
        ans *= n--;
    return ans;
}

int main(){
    int x;
    cin >> x;
    cout << fact(x) << endl;

    return 0;
}