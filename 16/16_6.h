#include <vector>
#include <iterator>
using namespace std;

template<typename T,unsigned N>
T *myBegin(T (&a)[N]){
    return a;
}

template<typename T,unsigned N>
T *myEnd(T (&a)[N]){
    return a + N;
}