std::string alphabeticShift(std::string inputString) {
    int j = 0;
    for(auto i : inputString){
        if(i != 122) inputString[j++] = i+1;
        else inputString[j++] = 97;
    }
    return inputString;
}
