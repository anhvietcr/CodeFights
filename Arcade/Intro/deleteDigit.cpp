int deleteDigit(int n) {
  int number = 0, max = 0;
  std::vector<int> r;
  //đảo số đưa vào vector
  //ví dụ : 222219 --> 912222
  while(n > 0){
    r.push_back(n%10);
    n/=10;
  }
  //chạy ngược i và j để tạo ra các số mới
  for(int i = 0; i < r.size(); i++){
    number = 0;
    for(int j = r.size() - 1; j >= 0; j--){
      if(i != j){
        number = number*10 + r[j];
      }
    }
    //so sánh với max để tìm max
    max = std::max(number, max);
  }
  return max;
}