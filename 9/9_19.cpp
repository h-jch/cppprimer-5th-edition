#include <iostream>
#include <string>
#include <list>
using namespace std;

int main(){
    list<string> l;
    string s;
    while(cin>>s)
        l.push_back(s);
    for (auto i = l.begin(); i != l.end();++i)
        cout << *i << " ";
    cout << endl;

    return 0;
}