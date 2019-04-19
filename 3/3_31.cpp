#include <iostream>
using namespace std;

int main(){
    int n[10];
    for (int i = 0; i < 10;++i)
        n[i] = i;
    for(auto i:n)
        cout << i << " ";
    cout << endl;

    return 0;
}