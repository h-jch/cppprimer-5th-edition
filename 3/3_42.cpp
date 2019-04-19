#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(10, 2);
    int n[10];
    for (int i=0;i<10;++i)
        n[i] = v[i];
    for(auto i:n)
        cout << i << " ";
    cout << endl;

    return 0;
}