#include <iostream>
#include <fstream>
#include <string>
#include <vector>
#include <iterator>
using namespace std;

int main(){
    ifstream in("test.txt");
    istream_iterator<string> str_it(in), eof;
    vector<string> words;
    copy(str_it, eof, back_inserter(words));
    copy(words.cbegin(), words.cend(), ostream_iterator<string>(cout, " "));

    return 0;
}