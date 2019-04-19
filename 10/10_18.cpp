#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
using namespace std;

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggiesofpartition(vector<string> &words,vector<string>::size_type sz){
    elimDups(words);
    auto wc = partition(words.begin(), words.end(), [sz](const string &a) -> bool { return a.size() >= sz; });
    for_each(words.begin(), wc, [](const string &s) { cout << s << " "; });
    cout << endl;
}

int main(){
    vector<string> v{"red", "red", "black", "green", "blue", "white", "green", "red", "grey", "green", "black"};
    biggiesofpartition(v, 4);

    return 0;
}