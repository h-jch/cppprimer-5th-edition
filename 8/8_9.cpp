#include <iostream>
#include <sstream>
#include <string>
using namespace std;

istream &read_print(istream &is){
    string s;
    while(is>>s)
        cout << s << endl;
    is.clear();
    return is;
}

int main(){
    istringstream in("Hello, world!");
    read_print(in);

    return 0;
}