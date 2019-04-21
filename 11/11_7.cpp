#include <iostream>
#include <map>
#include <string>
#include <vector>
using namespace std;

int main(){
    map<string, vector<string>> family;
    string fname, cname;
    while ([&]() -> bool { cout << "enter family name: "; return cin>>fname&&(fname!="end"); }()){
        cout << "enter child name: ";
        while(cin>>cname&&(cname!="end"))
            family[fname].push_back(cname);
    }

    for (const auto &i : family)
    {
        cout << i.first << " ";
        for (const auto j : i.second)
            cout << j << " ";
        cout << endl;
    }

    system("pause");

    return 0;
}