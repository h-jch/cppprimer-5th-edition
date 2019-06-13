#include "15_3.h"
using namespace std;

class Disc_quote:public Quote{
public:
    Disc_quote() = default;
    Disc_quote(const string &book,double price,size_t qty,double dis):Quote(book,price),quantity(qty),discount(dis){}
    double net_price(size_t) const = 0;

protected:
    size_t quantity = 0;
    double discount = 0.0;
};

class Bulk_quote:public Disc_quote{
public:
    using Disc_quote::Disc_quote;
    double net_price(size_t cnt) const override{
        if(cnt>=quantity)
            return cnt * (1 - discount) * price;
        else
            return cnt * price;
    }
};