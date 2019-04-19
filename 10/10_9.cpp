#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &v){
    sort(v.begin(), v.end());
    
    for(auto c:v)
        cout << c << " ";
    cout << endl;

    auto end_unique = unique(v.begin(), v.end());

    for(auto c:v)
        cout << c << " ";
    cout << endl;

    v.erase(end_unique, v.end());
}

int main(){
    vector<string> words;
    string s;
    while(cin>>s)
        words.push_back(s);
    for(auto c:words)
        cout << c << " ";
    cout << endl;
    elimDups(words);
    for(auto c:words)
        cout << c << " ";
    cout << endl;

    return 0;
}