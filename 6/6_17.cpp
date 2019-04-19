#include <iostream>
#include <string>
using namespace std;

bool isUpper(const string &s){
    for(auto c:s){
        if(c>=65&&c<=90)
            return true;
    }
    return false;
}

void toLower(string &s){
    for(auto &c:s){
        if(c>=65&&c<=90)
            c += 32;
    }
}