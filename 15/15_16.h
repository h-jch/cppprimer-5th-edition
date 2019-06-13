#include "15_15.h"
using namespace std;

class Limit_quote:public Disc_quote{
public:
    Limit_quote() = default;
    Limit_quote(const string &book, double price, size_t min, double dis, size_t max) : Disc_quote(book, price, min, dis), max_qty(max){}
    double net_price(size_t cnt) const override{
        if(cnt>max_qty)
            return max_qty * (1 - discount) * price + (cnt - max_qty) * price;
        else
            return cnt * (1 - discount) * price;
    }

private:
    size_t max_qty = 0;
};