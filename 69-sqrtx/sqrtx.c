int mySqrt(int x) {
    long long i;
    long long n=0;
    for(i=1;i*i<=x;i++){
        n=i;
    }
    return n;
}