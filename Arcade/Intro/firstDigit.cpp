char firstDigit(std::string in) {
    for(char i: in){ if(isdigit(i)) return i; }
    return 0;
}
