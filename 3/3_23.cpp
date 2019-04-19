#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v(10);
    for (decltype(v.size()) i = 0; i < v.size();++i)
        cin >> v[i];
    for (auto i = v.begin(); i < v.end();++i)
        *i = *i * 2;
    for(auto i:v)
        cout << i << " ";
    cout << endl;

    return 0;
}