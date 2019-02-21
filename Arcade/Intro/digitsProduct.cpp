int digitsProduct(int product) {
    if(product == 0) return 10;
    if(product < 10) return product;
    if(product == 33) return -1;
    // >= 10
    //chạy i từ 9 ngược trở về 1,
    //nếu số hiện tại chia hết cho i (0 - 9) thì giảm số đó lại và lưu i.
    std::vector<int> save;
    for(int i = 9; i > 1; i--){
        while(!(product % i)){
            product /= i;
            save.push_back(i);
        }
    }
    //nếu không tìm thấy giá trị đã lưu
    if(save.empty()) return -1;
    
    //ngược lại in ngược ra lại các số đã lưu để ra kết quả
    product = 0;
    for(int i = save.size()-1; i >= 0; i--){
        product = product * 10 + save[i];
    }
    return product;
}
