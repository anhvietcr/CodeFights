std::vector<int> decToBin(int n){
    std::vector<int> save;
    while(n > 0){
        if(n % 2 == 0){
            save.push_back(0);
        }else{
            save.push_back(1);
        }
        n /= 2;
    }
    return save;
}
int mirrorBits(int a) {
    int number = 0;
    std::vector<int> str = decToBin(a);
    for(auto c : str){
        number = number * 2 + c;
    }
    return number;
}
