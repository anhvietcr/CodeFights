std::string longestDigitsPrefix(std::string inputString) {
    std::string r;
    int flag = 0;
    for(auto i : inputString){
        if(isdigit(i)) r+=i; flag = 1;
        if(flag == 1 && !isdigit(i)) break;
    }
    return r;
}
