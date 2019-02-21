int s=0,magicalWell(int a, int b, int n) {
    while (n) {
        s+=a++*b++;
        n--;
    }
    return s;
}
