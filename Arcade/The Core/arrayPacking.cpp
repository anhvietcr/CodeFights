int arrayPacking(std::vector<int> a) {
    string save = "";
    int number = 0;
    //dao nguoc
    reverse(a.begin(), a.end());
    //tranversal to string bitset
    for(int i : a){
        std::bitset<8> bin(i);
        save += bin.to_string();
    }
    //bitset to int
    for(int i = 0; i < save.size(); i++){
        number = number * 2 + (save[i]-'0');
    }
    return number;
}