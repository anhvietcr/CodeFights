bool palindromeRearranging(std::string inputString) {
    int count = 0;
    int check = 0;
    std::string back_up = inputString;
  for(int i = 0; i < inputString.size(); i++){
      for(int j = 0; j < inputString.size(); j++){
          if(inputString.at(i) == back_up.at(j)){
              count++; //same character
              back_up.at(j) -= 32; //to -> upper case
          }
      }
      if(count % 2 != 0 && (count > 0)){
          check++; count = 0;
      }
  }
    //have > 1 different character
    return (check > 1) ? false : true;
}