int decToBin(int n){
    int i = 0;
    while(n > 0){
        if(n % 2 != 0) ++i;
        n /= 2;
    }
    return i;
}
int rangeBitCount(int a, int b) {
    int sum = 0;
    for(int i = a; i <= b; i++){
        sum += decToBin(i);
    }
    return sum;
}
