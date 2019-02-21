int addTwoDigits(int n) {
    if((n >= 10) && (n <= 99)){
        int b = n%10;
        n = n/10;
        return n+b;
    }
}
