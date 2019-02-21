bool evenDigitsOnly(int n) {
    while(n > 0){
        if((n%10)%2) return false;
        n /= 10;
    }
    return true;
}
