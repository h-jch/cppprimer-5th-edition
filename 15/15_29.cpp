#include <numeric>
#include <vector>
#include <memory>
#include "15_27.h"
using namespace std;

int main(){
    vector<shared_ptr<Quote>> v;

    shared_ptr<Bulk_quote> bp1 = make_shared<Bulk_quote>("012345", 30, 4, 0.3);
    shared_ptr<Bulk_quote> bp2 = make_shared<Bulk_quote>("012345", 40, 5, 0.1);

    cout << "bulk_quote's total price: " << bp1->net_price(5) + bp2->net_price(5) << endl;

    v.push_back(bp1);
    v.push_back(bp2);

    double p = accumulate(v.cbegin(), v.cend(), 0.0, [](double ret, shared_ptr<Quote> p) { return ret += p->net_price(5); });

    cout << "total in the vector: " << p << endl;

    return 0;
}