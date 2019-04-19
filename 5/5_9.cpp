#include <iostream>
#include <string>
using namespace std;

int main(){
    string s;
    int aCnt = 0, eCnt = 0, iCnt = 0, oCnt = 0, uCnt = 0;
    getline(cin, s);
    for(auto c:s){
        if(c=='a'||c=='A')
            aCnt++;
        else if(c=='e'||c=='E')
            eCnt++;
        else if(c=='i'||c=='I')
            iCnt++;
        else if(c=='o'||c=='O')
            oCnt++;
        else if(c=='u'||c=='U')
            uCnt++;
    }
    cout << "a: " << aCnt << endl
         << "e: " << eCnt << endl
         << "i: " << iCnt << endl
         << "o: " << oCnt << endl
         << "u: " << uCnt << endl;

    return 0;
}