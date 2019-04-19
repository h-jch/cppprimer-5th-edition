#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    do{
        cout << "Please enter two string: " << endl;
        getline(cin, s1);
        getline(cin, s2);
        if(s1.size()<=s2.size())
            cout << s1 << endl;
        else
            cout << s2 << endl;
    } while (cin);

    return 0;
}