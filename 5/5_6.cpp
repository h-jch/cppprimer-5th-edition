#include <iostream>
using namespace std;

int main(){
    int n;
    char s;
    cin >> n;
    s = n >= 90 ? 'A' : (n >= 80 ? 'B' : (n >= 70 ? 'C' : (n >= 60 ? 'D' : 'E')));
    cout << s << endl;

    return 0;
}