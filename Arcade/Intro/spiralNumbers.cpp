std::vector<std::vector<int>> spiralNumbers(int n) {
    std::vector< std::vector<int> > save(n, std::vector<int>(n));
    int hang = 0, cot = 0;
    int right = n-1, down = n-1, left = 0, up = 1;
    int i = 1; //start
    //right -> down -> left -> up
    while(i < n*n){
        while(cot < right) { save[hang][cot++] = i++; }
        while(hang < down) { save[hang++][cot] = i++;}
        while(cot > left) { save[hang][cot--] = i++; }
        while(hang > up) { save[hang--][cot] = i++;}
        --right; --down; ++left; ++up;
    }
    save[hang][cot] = n*n;
    return save;
}
