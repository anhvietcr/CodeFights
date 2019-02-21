int s=0,i=0,j=0,lineUp(string str) {
    for (char x : str) {
        if (x == 'L') {
            i = (i + 3) % 4;
            j = (j + 1) % 4;
        }
        if (x == 'R') {
            i = (i + 1) % 4;
            j = (j + 3) % 4;
        }
        if (i == j) s++;
    }
    return s;
}
