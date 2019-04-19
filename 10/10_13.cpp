#include <iostream>
#include <string>
#include <vector>
#include <algorithm>
using namespace std;

bool islongerthan5(const string &s){
    return s.size() >= 5;
}

int main(){
    vector<string> words;
    string s;
    while(cin>>s)
        words.push_back(s);
    
    for(auto c:words)
        cout << c << " ";
    cout << endl;

    auto end_partitoin = partition(words.begin(), words.end(), islongerthan5);
/*
    words.erase(end_partitoin, words.end());

    for(auto c:words)
        cout << c << " ";
    cout << endl;
*/
    for (auto it = words.begin(); it != end_partitoin;++it)
        cout << *it << " ";
    cout << endl;

    return 0;
}