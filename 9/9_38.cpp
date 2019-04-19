#include <iostream>
#include <vector>
#include <string>
using namespace std;

int main(){
    vector<string> v;
    string s;
    while(cin>>s){
        v.push_back(s);
        cout << v.capacity() << endl;
    }

    return 0;
}