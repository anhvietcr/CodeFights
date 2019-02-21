std::vector<int> extractEachKth(std::vector<int> in, int k) {
    std::vector<int> r;
    int j = 1;
    for(int i = 0; i < in.size(); i++){
        if(j*k-1 != i) r.push_back(in[i]);
        else j++;   
    }
    return r;
}
