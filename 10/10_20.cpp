#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

int longer(vector<string> words,vector<string>::size_type sz){
    return count_if(words.begin(), words.end(), [sz](const string &s) -> bool { return s.size() > sz; });
}

int main(){
    vector<string> v{"red", "red", "black", "green", "blue", "white", "green", "red", "grey", "green", "black"};
    cout << longer(v, 6) << endl;

    return 0;
}