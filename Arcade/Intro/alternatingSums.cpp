std::vector<int> alternatingSums(std::vector<int> a) {
    int sum1=0, sum2=0;
    for(int i = 0; i < a.size(); i++){
        if(i % 2 != 0) sum1 += a[i];
        else sum2 += a[i];
    }
    std::vector<int> arr;
    arr.push_back(sum2);
    arr.push_back(sum1);
    return arr;
}
