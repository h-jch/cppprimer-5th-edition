#include <iostream>
#include <string>
using namespace std;
/*
int main(){
    string s;
    getline(cin, s);
    char *p = &s[0];
    while(*p!='\0'){
        if(*p!=' '&&*p!=','&&*p!='.')
            *p = 'X';
        p++;
    }
    cout << s << endl;

    return 0;
}
*/

int main(){
    string s;
    getline(cin,s);
    for (decltype(s.size()) i = 0; i < s.size();++i){
        if(s[i]!=' '&&s[i]!=','&&s[i]!='.')
            s[i] = 'X';
    }
    cout << s << endl;

    return 0;
}