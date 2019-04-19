#include <iostream>
#include <iterator>
#include <vector>
#include <algorithm>
using namespace std;

int main(){
    istream_iterator<int> in(cin), eof;
    vector<int> v;
    copy(in, eof, back_inserter(v));
    sort(v.begin(), v.end());
    copy(v.begin(), v.end(), ostream_iterator<int>(cout, " "));

    return 0;
}