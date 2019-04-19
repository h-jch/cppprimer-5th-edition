#include <iostream>
using namespace std;

int cmp(int x,int *y){
    if(x>*y)
        return x;
    else
        return *y;
}