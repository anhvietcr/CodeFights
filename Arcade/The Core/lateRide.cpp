int lateRide(int n) {
    int h = n/60;
    int m = n - h*60;
    return h/10+h%10+m/10+m%10;
}
