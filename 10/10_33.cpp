#include <iostream>
#include <fstream>
#include <iterator>
#include <algorithm>

using namespace std;

int main(){
    ifstream in("numbers.txt");
    istream_iterator<int> is(in), eof;
    ofstream os_odd("odd.txt");
    ofstream os_even("even.txt");
    ostream_iterator<int> out_odd(os_odd, " "), out_even(os_even, "\n");
    for_each(is, eof, [&out_odd, &out_even](const int i) { *(i % 2 == 0 ? out_even : out_odd)++ = i; });

    return 0;
}