#include <iostream>
#include <string>
using namespace std;

/*find_first_of
int main(){
    string s{"ab2c3d7R4E6"};
    string numbers{"0123456789"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for (decltype(s.size()) pos = 0; (pos = s.find_first_of(numbers, pos)) != string::npos;++pos){
        cout << s[pos] << " ";
    }
    cout << endl;
    for (decltype(s.size()) pos = 0; (pos = s.find_first_of(alphabet, pos)) != string::npos;++pos){
        cout << s[pos] << " ";
    }
    cout << endl;

    return 0;
}
*/
//find_first_not_of
int main(){
    string s{"ab2c3d7R4E6"};
    string numbers{"0123456789"};
    string alphabet{"abcdefghijklmnopqrstuvwxyzABCDEFGHIJKLMNOPQRSTUVWXYZ"};
    for (decltype(s.size()) pos = 0; (pos = s.find_first_not_of(alphabet, pos)) != string::npos;++pos){
        cout << s[pos] << " ";
    }
    cout << endl;
    for (decltype(s.size()) pos = 0; (pos = s.find_first_not_of(numbers, pos)) != string::npos;++pos){
        cout << s[pos] << " ";
    }
    cout << endl;

    return 0;
}