#include <iostream>
#include <vector>
using namespace std;
/*
int main(){
    int n1[10], n2[10];
    for (int i = 0; i < 10;i++)
        cin >> n1[i];
    for (int i = 0; i < 10;i++)
        cin >> n2[i];
    for (int i = 0; i < 10;i++){
        if(n1[i]!=n2[i]){
            cout<<"no equal"<<endl;
            return 0;
        }
    }
    cout<<"equal"<<endl;
    return 0;
}
*/

int main(){
    vector<int> n1={1,2,3,4}, n2={1,2,3};
/*    int n;
    while(cin>>n)
        n1.push_back(n);
    while(cin>>n)
        n2.push_back(n);*/
    if(n1==n2)
        cout << "equal" << endl;
    else
        cout << "no equal" << endl;
    return 0;
}