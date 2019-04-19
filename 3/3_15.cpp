#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> s;
    string s1;
    while(getline(cin,s1))
        s.push_back(s1);
    for(auto i:s)
        cout << i << " ";
    cout << endl;

    return 0;
}