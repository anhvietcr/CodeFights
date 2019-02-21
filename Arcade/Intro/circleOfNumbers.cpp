int circleOfNumbers(int n, int f) {
    if(f > n/2) return f-n/2;
    if(f == n/2) return 0;
    return f+n/2;
}
