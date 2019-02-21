int r=0,additionWithoutCarrying(int p1, int p2) {
    for (int d = 1; p1 | p2; p1 /= 10, p2 /= 10, d *= 10) {
        r += (p1%10 + p2%10)%10 * d;
    }
    return r;
}
