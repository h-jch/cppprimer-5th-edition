#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v1, v2;
    int n;
    while(cin>>n){
        v1.push_back(n);
    }
/*    for (decltype(v1.size()) i = 0; i < v1.size() - 1; ++i){
        v2.push_back(v1[i] + v1[i + 1]);
    }
*/
    for (decltype(v1.size()) i = 0; i < (v1.size() % 2 == 0 ? v1.size() / 2 : v1.size() / 2 + 1); ++i){
        v2.push_back(v1[i] + v1[v1.size() - i - 1]);
    }
    
    for (auto i : v2)
        cout << i << " ";
    cout << endl;

    return 0;
}