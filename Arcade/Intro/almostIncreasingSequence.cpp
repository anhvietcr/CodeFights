bool almostIncreasingSequence(std::vector<int> sequence) {
    int count = 0;
    for(int i = 0; (count < 2) && (i < sequence.size()-1); i++){
        if(sequence[i] >= sequence[i+1]){
            ++count;
            if((i-1 >= 0) && (sequence[i-1] >= sequence[i+1])){
                if(((i+2) < sequence.size()) && (sequence[i] >= sequence[i+2])){
                    return false;
                }
            }
        }
    }
    return (count > 1) ? false : true;
}
