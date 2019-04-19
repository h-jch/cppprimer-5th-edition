#include <iostream>
#include <string>
#include <vector>
using namespace std;

int main(){
    vector<string> v;
    string s;
    while(cin>>s){
        v.push_back(s);
    }
    for(auto &s1:v){
        for(auto &c:s1){
            c = toupper(c);
        }
    }
    for(auto s1:v)
        cout << s1 << endl;

    return 0;
}