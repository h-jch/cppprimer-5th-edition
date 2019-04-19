#include <iostream>
#include <fstream>
#include <string>
using namespace std;

int main(){
    ifstream is("test.txt");
    if(!is)
        return -1;
    string longest_word;
    for (string word; is >> word;)
        if(word.find_first_not_of("aceimnorsuvwxz")==string::npos&&word.size()>longest_word.size())
            longest_word = word;
    cout << longest_word << endl;

    return 0;
}