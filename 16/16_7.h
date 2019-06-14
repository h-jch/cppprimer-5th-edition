template<typename T,unsigned N>
constexpr unsigned length(const T (&a)[N]){
    return N;
}