int d, differentSymbolsNaive(std::string s) {
    std::sort(s.begin(), s.end());
    for(int i = 0; i < s.size(); i++){
        if(s[i] != s[i+1]) ++d;
    }
    return d;
}
