#include <iostream>
#include <map>
#include <string>
using namespace std;

int main(){
    multimap<string, string> m;
    string fname, cname;
    while(cin>>fname>>cname){
        m.emplace(fname, cname);
    }
    for(auto i:m)
        cout << i.first << " " << i.second << endl;

    return 0;
}