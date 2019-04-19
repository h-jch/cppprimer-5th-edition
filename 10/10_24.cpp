#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s,string::size_type sz){
    return s.size() < sz;
}

int main(){
    string s{"abcde"};
    vector<int> v{1, 2, 3, 4, 5, 6, 7};
    auto it = find_if(v.begin(), v.end(), bind(check_size, s, _1));
    cout << *it << endl;

    return 0;
}