#include <iostream>
#include <algorithm>
#include <vector>
#include <list>
using namespace std;

int main(){
    char s1[] = "abcdef";
    char s2[] = "abcdef";
    vector<char *> roster1{s1};
    list<char *> roster2{s2};
    cout << equal(roster1.cbegin(), roster1.cend(), roster2.cbegin()) << endl;

    return 0;
}