int sumUpNumbers(std::string inputString) {
    int sum = 0, i = 0, digit = 0;
    std::string save;
    std::vector<int> r;
    while(inputString[i] != '\0'){
        int num = inputString[i] - '0';
        if(0 <= num && num <= 9){
            digit = digit*10 + num;
        }else{
            sum += digit;
            digit = 0;
        }
        i++;
    }
    return sum+digit;
}
