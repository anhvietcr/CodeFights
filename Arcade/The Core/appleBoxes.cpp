int r=0, y=0,appleBoxes(int k) {
    for (int i = 1, j = 2; i <= k || j <= k; i += 2, j += 2) {
        y += i <= k ? i*i : 0;
        r += j <= k ? j*j : 0;
    }
    return r-y;
}
