int arrayChange(std::vector<int> inputArray) {
    int dem = 0;
    for(int i = 1; i < inputArray.size(); i++){
        while(inputArray[i-1] >= inputArray[i]){
            ++dem;
            inputArray[i] += 1;
        }
    }
    return dem;
}
