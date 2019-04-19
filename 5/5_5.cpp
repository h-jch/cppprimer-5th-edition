#include <iostream>
using namespace std;

int main(){
    int n;
    char s;
    cin >> n;
    if(n>=90)
        s = 'A';
    else if(n>=80)
        s = 'B';
    else if(n>=70)
        s = 'C';
    else if(n>=60)
        s = 'D';
    else
        s = 'E';
    cout << s << endl;

    return 0;
}