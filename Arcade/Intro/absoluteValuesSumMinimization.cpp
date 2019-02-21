int absoluteValuesSumMinimization(std::vector<int> a) {
    if(a.size()%2) return a[a.size()/2];
    return a[a.size()/2-1];
}
