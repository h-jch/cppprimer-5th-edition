#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

bool isShorter(const string &s1,const string &s2){
    return s1.size() < s2.size();
}

void elimDups(vector<string> &v){
    sort(v.begin(), v.end());
    auto end_unique = unique(v.begin(), v.end());
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

    stable_sort(words.begin(), words.end(), isShorter);

    for(auto c:words)
        cout << c << " ";
    cout << endl;

    return 0;
}