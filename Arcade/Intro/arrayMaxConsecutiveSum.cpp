int index, sum, max, arrayMaxConsecutiveSum(std::vector<int> inputArray, int k) {
    //sử dụng phương pháp gối đầu
    //tính theo từng phân đoạn
    //current sum | (ngay tại) 0 -> (chưa tới) k-1
    for(int i = 0; i < k-1; i++){
        sum += inputArray[i];
    }
    //(ngay tại) k-1 -> (chưa tới) size()
    for(int i = k-1; i < inputArray.size(); i++){
        sum += inputArray[i];
        if(max < sum) max = sum;
        sum -= inputArray[i-(k-1)];
        //trừ đi phần tử đầu tiên ở mỗi lần gối đầu
    }
    return max;
}
