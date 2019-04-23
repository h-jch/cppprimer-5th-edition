#include <iostream>
using namespace std;

int main(){
    cout << "How many characters do you want to enter? ";
    int size = 0;
    cin >> size;
    cin.ignore();
    char *pt = new char[size + 1]();
    cout << "enter the string: ";
    cin.getline(pt, size + 1);
    cout << pt << endl;
    delete[] pt;

    return 0;
}