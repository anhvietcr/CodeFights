std::string messageFromBinaryCode(std::string code) {
    std::bitset<8> bit; //to set bit
    std::istringstream is(code); //get sstring
    std::string save; //save
    while(is >> bit){
        save.push_back(char(bit.to_ulong()));
    }
    return save;
}
//http://www.cplusplus.com/forum/beginner/154597/
