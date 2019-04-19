#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    getline(cin, s);
    for (auto &c:s){
        if(c!=' '&&c!=','&&c!='.')
            c = 'X';
    }
    cout << s << endl;

    return 0;
}