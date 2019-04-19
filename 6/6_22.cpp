void exchange(int *x,int *y){
    int *t = x;
    x = y;
    y = t;
}