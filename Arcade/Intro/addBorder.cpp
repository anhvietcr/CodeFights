std::vector<std::string> addBorder(std::vector<std::string> picture) {
    std::vector<string> r;
    std::string str;
    for(int i = 0; i < picture[0].length()+2; i++){
        str.append("*");
    }
    r.push_back(str);
    for(auto i : picture){
        r.push_back("*" + i + "*");
    }
    str = "";
    for(int i = 0; i < picture[0].length()+2; i++){
        str.append("*");
    }
    r.push_back(str);
    return r;
}
