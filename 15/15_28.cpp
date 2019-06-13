#include <numeric>
#include <vector>
#include "15_27.h"
using namespace std;

int main(){
    vector<Quote> v;
    Bulk_quote b1("012345", 30, 4, 0.3);
    Bulk_quote b2("012345", 40, 5, 0.1);

    cout << "bulk_quote's total price: " << b1.net_price(5) + b2.net_price(5) << endl;

    v.push_back(b1);
    v.push_back(b2);

    double p = accumulate(v.cbegin(), v.cend(), 0.0, [](double ret, const Quote &obj) { return ret += obj.net_price(5); });

    cout << "total in the vector: " << p << endl;

    return 0;
}