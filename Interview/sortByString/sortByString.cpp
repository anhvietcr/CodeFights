std::string sortByString(std::string s, std::string t) {
    std::string reTurn = "";
    int indexT = 0;
    int indexS = 0;
    //for() t
    for(indexT = 0; indexT < t.length(); indexT++){
        //for() s
        for(indexS = 0; indexS < s.length(); indexS++){
            if(s[indexS] == t[indexT]){
                reTurn += s[indexS];
            }
        }
    }
    return reTurn;
}
/*
CODE BY TOP 1
std::string sortByString(std::string s, std::string t) {
    int weight[128], i = 0;
    for (const auto& c : t) {
        weight[c] = i++;
    }
    std::sort(s.begin(), s.end(), [&](const char& lhs, const char& rhs) {
        return weight[lhs] < weight[rhs];
    });
    return s;
}

*/
