template<typename U,typename T>
U myFind(U begin,U end,const T &a){
    for (; begin != end;++begin){
        if(*begin==a)
            return begin;
    }
    return end;
}