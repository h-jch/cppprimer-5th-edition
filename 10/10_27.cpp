#include <iostream>
#include <vector>
#include <list>
#include <algorithm>
using namespace std;

int main(){
    vector<int> v{1, 2, 5, 6, 1, 2, 3, 3, 2, 1, 5};
    list<int> l;
    sort(v.begin(), v.end());
    unique_copy(v.begin(), v.end(), back_inserter(l));
    for(auto i:l)
        cout << i << " ";
    cout << endl;

    return 0;
}