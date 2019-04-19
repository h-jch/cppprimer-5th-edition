#include <iostream>
#include <vector>
using namespace std;

int main(){
    int n[7] = {1, 2, 3, 4, 5, 6, 0};
    vector<int> v(begin(n), end(n));
    for(auto i:v)
        cout << i << " ";
    cout << endl;

    return 0;
}