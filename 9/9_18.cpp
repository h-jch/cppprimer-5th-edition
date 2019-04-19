#include <iostream>
#include <deque>
#include <string>
using namespace std;

int main(){
    deque<string> d;
    string s;
    while(cin>>s)
        d.push_back(s);
    deque<string>::iterator i = d.begin();
    for (; i != d.end();++i)
        cout << *i << " ";
    cout<<endl;

    return 0;
}