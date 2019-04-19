#include <iostream>
#include <string>
#include <vector>
#include <list>
using namespace std;

int main(){
    list<const char *> l{"hello, ", "world!", "hello, ", "cpp!"};
    vector<string> v;
    v.assign(l.cbegin(), l.cend());
    for(const auto i:v)
        cout<<i;
    cout << endl;
    
    return 0;
}