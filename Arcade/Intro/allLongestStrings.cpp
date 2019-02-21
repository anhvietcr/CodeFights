std::vector<std::string> allLongestStrings(std::vector<std::string> inputArray) {
    std::vector<string> save;
    //find max lenght
    int max = inputArray[0].length();
    for(auto i : inputArray){
        if(i.length() > max){
            max = i.length();
        }
    }
    for(auto i : inputArray){
        if(i.length() >= max){
            save.push_back(i);
        }
    }
    return save;
}
