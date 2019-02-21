int c=0,countSumOfTwoRepresentations2(int n, int l, int r) {
    vector<int> s;
    for (;l<=r; l++) {
        s.push_back(l);
        for (int x : s) {
            if (x + l == n) c++;
            if (x + l > n) break;
            
        }
    }
    return c;
}
