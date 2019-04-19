#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int main(){
    vector<string> v{"a", "ab", "abc", "a", "a"};
    cout << count(v.begin(), v.end(), "a") << endl;

    return 0;
}