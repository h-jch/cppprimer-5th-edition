#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<char> c{'w', 'h', 'i', 't', 'e'};
    string s(c.begin(),c.end());
    cout << s << endl;

    return 0;
}