#include "15_6.h"
using namespace std;

int main(){
    Quote quote("012345", 20.5);
    Bulk_quote bulk_quote("012346", 20.5, 3, 0.8);
    print_total(cout, quote, 3);
    print_total(cout, bulk_quote, 5);

    return 0;
}