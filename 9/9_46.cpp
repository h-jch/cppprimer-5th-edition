#include <iostream>
#include <string>
using namespace std;

void addName(string &s,const string &pre,const string &suf){
    s.insert(0, pre + ' ');
    s.insert(s.size(), ' ' + suf);
}

int main(){
    string name{"Harold Finch"};
    addName(name, "Mr.", "Jr.");
    cout << name << endl;

    return 0;
}