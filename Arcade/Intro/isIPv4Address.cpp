bool is_digits(const std::string &str){
    return std::all_of(str.begin(), str.end(), ::isdigit); // C++11
}
bool isIPv4Address(std::string inputString) {
    if(5 <= inputString.length() && inputString.length() <= 15){
        int count = 0, num = 0;
        char delim  = '.';
        std::stringstream ss(inputString);
        std::string item;
        while(getline(ss, item, delim)){
           if(item != ""){
               ++count;
               //check all number is digit
               if(is_digits(item) == 0){
                    return false;
                }
               //convert string to int
               stringstream convert(item);
               convert >> num;
               //check rank IP
               if(num < 0 || num > 255){
                   return false;
               }
           }else return false;
        }
        //if number IP == 4 -> true
        if(count < 4 || count > 4) return false;
        return true;        
    }
    return false;
}