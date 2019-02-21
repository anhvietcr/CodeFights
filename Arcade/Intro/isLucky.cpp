bool isLucky(int n) {
    std::vector<int> num;
    int size = 0;
    while(n > 0){
        num.push_back(n%10);
        ++size;
        n /= 10;
    }
    int i = 0, j = size - 1;
    int sum1 = 0, sum2 = 0;
    while( i < j){
        sum1 += num[i];
        sum2 += num[j];
        ++i; --j;
    }
    return (sum1 == sum2) ? true : false;
}
