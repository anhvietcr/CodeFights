int candies(int n, int m) {
    for(int i = 0; i <= m; i++){
        if(n * i > m){
            return n*(i-1);
        }else if(n * i >= m){
            return m;
        }
    }
}
