#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> v;
    int n;
    while(cin>>n)
        v.push_back(n);
    
    for(auto i:v)
        cout << i << " ";
    cout << endl;

    return 0;
}