#include <iostream>
#include <vector>
using namespace std;

int main(){
    vector<int> n1, n2;
    int n;
    bool f = 1;
    while(cin>>n)
        n1.push_back(n);
    cin.clear();
    while(cin>>n)
        n2.push_back(n);
    
    if(n1.size()<n2.size()){
        for (decltype(n1.size()) i = 0; i < n1.size();++i){
            if(n1[i]!=n2[i]){
                f = 0;
                break;
            }
        }
    }
    else{
        for (decltype(n2.size()) i = 0; i < n2.size();++i){
            if(n2[i]!=n1[i]){
                f = 0;
                break;
            }
        }
    }
    if(f==0)
        cout << "flase" << endl;
    else
        cout << "true" << endl;

    return 0;
}