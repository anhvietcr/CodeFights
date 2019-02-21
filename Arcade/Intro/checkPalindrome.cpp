bool checkPalindrome(std::string inputString) {
    int i = 0;
    int j =  inputString.size() - 1;
    while( i < j ){
        if(inputString.at(i) == inputString.at(j)){
            i++;
            j--;
        }else{
           return false;
        }
    }
    return true;
}
