int arrayMaximalAdjacentDifference(std::vector<int> inputArray) {
    int max = 0, temp = 0;
    for(int i = 0; i < inputArray.size() -1; i++){
        if(inputArray.at(i) > inputArray.at(i+1)){
            temp = inputArray.at(i) - inputArray.at(i+1);
        }else{
            temp = inputArray.at(i+1) - inputArray.at(i);
        }
        if(temp > max) max = temp;
    }
    return max;
}
