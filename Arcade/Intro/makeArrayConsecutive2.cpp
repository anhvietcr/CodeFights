int makeArrayConsecutive2(std::vector<int> num) {
    std::vector<int> save;
    for(int i = 0; i < num.size()-1; i++){
        for(int j=i+1; j < num.size(); j++){
            if(num.at(i) > num.at(j)){
                swap(num.at(i), num.at(j));
            }
        }
    }
    for(int i = num.at(0); i <= num.at(num.size()-1); i++){
        save.push_back(i);
    }
    return save.size() - num.size();
}
