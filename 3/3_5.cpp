#include <iostream>
#include <string>
using namespace std;

int main(){
    string s, s1;
    while(getline(cin,s1)){
//        s += s1;
        s = s + s1 + " ";
    }

    cout << s << endl;

    return 0;
}