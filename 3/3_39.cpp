#include <iostream>
#include <string>
#include <cstring>
using namespace std;
/*
int main(){
    string s1, s2;
    getline(cin, s1);
    getline(cin, s2);
    if(s1>s2)
        cout << s1 << ">" << s2 << endl;
    else if(s1<s2)
        cout << s1 << "<" << s2 << endl;
    else
        cout << s1 << "=" << s2 << endl;

    return 0;
}
*/

int main(){
    char s1[20],s2[20];
    cin >> s1 >> s2;
    if(strcmp(s1,s2)>0)
        cout << s1 << ">" << s2 << endl;
    else if(strcmp(s1,s2))
        cout << s1 << "<" << s2 << endl;
    else
        cout << s1 << "=" << s2 << endl;
    return 0;
}