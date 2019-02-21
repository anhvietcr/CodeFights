std::vector<int> sortByHeight(std::vector<int> a) {
    for(int i = 0; i < a.size()-1; i++){
        for(int j = i+1; j < a.size(); j++){
            if(a[i] == -1) break;
            else{
                 if(a[i] > a[j] && a[j] != -1){
                    int temp = a[i];
                    a[i] = a[j];
                    a[j] = temp;
                }
            }
        }
    }
    return a;
}
