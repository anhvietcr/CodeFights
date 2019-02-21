bool variableName(std::string name) {
    if(isdigit(name[0])) return false;
    if(name[0] == 32) return false;
    for(auto i : name){
        if(!(isdigit(i) || isalpha(i) || i == '_')) return false;
    }
    return true;
}
