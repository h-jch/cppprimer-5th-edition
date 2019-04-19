#include <iostream>
#include <vector>
#include <string>
#include <algorithm>
#include <functional>
using namespace std;
using namespace std::placeholders;

bool check_size(const string &s, string::size_type sz){
    return s.size() >= sz;
}

void elimDups(vector<string> &words){
    sort(words.begin(), words.end());
    auto end_unique = unique(words.begin(), words.end());
    words.erase(end_unique, words.end());
}

void biggies(vector<string> &words,vector<string>::size_type sz){
    elimDups(words);
//    auto it = find_if(words.begin(), words.end(), bind(check_size, _1, sz));
//    for_each(it, words.end(), [](const string &s) { cout << s << " "; });

    auto it = stable_partition(words.begin(), words.end(), bind(check_size, _1, sz));
    for_each(words.begin(), it, [](const string &s) { cout << s << " "; });

    cout<<endl;
}

int main(){
    vector<string> v{"aaaa", "aaaaa", "aaa", "aaaaaaa", "aaa", "aaaa"};
    biggies(v, 5);

    return 0;
}