#include <iostream>
#include <string>
#include <cstring>
using namespace std;

int main(){
    const char *c1 = "Hello, ";
    const char *c2 = "world.";
    unsigned len = strlen(c1) + strlen(c2) + 1;
    char *pt = new char[len]();
    strcat_s(pt, len, c1);
    strcat_s(pt, len, c2);
    cout << pt << endl;

    string s1 = "Hello, ";
    string s2 = "world.";
    strcat_s(pt, len, (s1 + s2).c_str());
    cout << pt << endl;

    delete[] pt;
    
    return 0;
}