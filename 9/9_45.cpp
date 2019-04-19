#include <iostream>
#include <string>
using namespace std;

void addName(string &s,const string &pre,const string &suf){
    s.insert(s.begin(), ' ');
    s.insert(s.begin(), pre.begin(),pre.end());
    s.append(string{' '});
    s.append(suf);
}

int main(){
    string name{"Harold Finch"};
    addName(name, "Mr.", "Jr.");
    cout << name << endl;

    return 0;
}