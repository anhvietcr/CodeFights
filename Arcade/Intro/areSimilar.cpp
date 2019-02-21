bool areSimilar(std::vector<int> A, std::vector<int> B) {
    //kiem tra bang cach xem so lan != nhau la bao nhieu
    int kt = 0, flag = 1, x = 0, y = 0;
    for(int i = 0; i < B.size(); i++){
        if(A[i] != B[i]){
            flag = 0;   //cac diem khong trung nhau -> ha co
            ++kt;
            if(kt == 1){
                x = i;  //luu lai chi so lan dau tien
            }else{
                y = i;  //luu lai chi so lan tiep theo
            }
        }
    }
    if(flag == 1) return true; //khong khac nhau
    if(kt < 2) return false;  //chi khac nhau 1 so
    if(kt == 2){
        if(A[x] == B[y] && A[y] == B[x]) return true;
    }
    return false;
}
