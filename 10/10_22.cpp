#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool lessthan(const string &a,string::size_type sz){
    return a.size() <= sz;
}

int main(){
    vector<string> v{"a", "aa", "aaa", "aaaa", "aaaaa", "aaaaaaa", "aaaaaaaaaa", "Aaaaaaaaaaaaaaa"};
    cout << count_if(v.begin(), v.end(), bind(lessthan, _1, 6));

    return 0;
}