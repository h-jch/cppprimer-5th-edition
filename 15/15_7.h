#include "15_3.h"
using namespace std;

class Limit_quote:public Quote{
public:
    Limit_quote() = default;
    Limit_quote(const string &book,double p,size_t n,double dis):Quote(book,p),max(n),discount(dis){}
    virtual double net_price(size_t cnt) const{
        if(cnt>=max)
            return max * (1 - discount) * price + (cnt - max) * price;
        else
            return cnt * (1 - discount) * price;
    }

private:
    size_t max;
    double discount;
};