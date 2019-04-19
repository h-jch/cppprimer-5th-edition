#include <iostream>
using namespace std;

void swap(int *, int *);

int main(){
    int x, y;
    cin >> x >> y;
    cout << x << " " << y << endl;
    swap(&x, &y);
    cout << x << " " << y << endl;
    return 0;
}

void swap(int *x,int *y){
    int tmp = *x;
    *x = *y;
    *y = tmp;
}