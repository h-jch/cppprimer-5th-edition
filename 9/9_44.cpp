#include <iostream>
#include <string>
using namespace std;

void change(string &s,const string &oldVal,const string &newVal){
    for (decltype(s.size()) i = 0; i != s.size();++i){
        if(s.substr(i,oldVal.size())==oldVal){
            s.replace(i, oldVal.size(), newVal);
            i += newVal.size() - 1;
        }
    }
}

int main()
{
    string str{"To drive straight thru is a foolish, tho courageous act."};
    change(str, "tho", "though");
    change(str, "thru", "through");
    cout << str << endl;
}