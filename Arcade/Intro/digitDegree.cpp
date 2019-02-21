int d = 0;
int digitDegree(int n) {
    if(n < 10) return 0;
    int sum = 0; ++d; //tang so lan dem len 1
    while( n > 0){
        sum+=n%10;
        n /=10;
    }
    if(sum >= 10){
        digitDegree(sum); //de quy
    }
    return d;
}
