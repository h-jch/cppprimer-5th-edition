#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, t;
    bool f = 0;
    while(cin>>s){
        if(t==s){
            cout << t << endl;
            f = 1;
            break;
        }
        t = s;
    }
    if(f==0)
        cout << "no continous word" << endl;

    return 0;
}