#include <iostream>
#include <fstream>
#include <sstream>
#include <vector>
#include <string>
using namespace std;

struct PersonInfo{
    string name;
    vector<string> phones;
};

int main(){
    string line, word;
    vector<PersonInfo> people;
    istringstream record;
    ifstream is("test.txt");
    while(getline(is,line)){
        PersonInfo info;
        record.clear();
        record.str(line);
        record >> info.name;
        while(record>>word)
            info.phones.push_back(word);
        people.push_back(info);
    }
}