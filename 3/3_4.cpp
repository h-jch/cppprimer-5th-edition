#include <iostream>
#include <string>
using namespace std;

int main(){
    string s1,s2;
    getline(cin, s1);
    getline(cin, s2);
/*    if(s1==s2)
        cout << "equal" << endl;
    else{
        cout << (s1 > s2 ? s1 : s2) << endl;
    }
*/
    if(s1.size()==s2.size())
        cout<<"equal"<<endl;
    else{
        cout << (s1.size() > s2.size() ? s1 : s2) << endl;
    }
    
    return 0;
}