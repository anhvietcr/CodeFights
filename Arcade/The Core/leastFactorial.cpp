int s=1,leastFactorial(int n) {
    for (int i = 1; i < 120; i++) {
        s *= i;
        if (s >= n) return s;
    }
    return s;
}
