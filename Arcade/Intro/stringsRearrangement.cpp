bool stringsRearrangement(std::vector<std::string> inputArray) {

  struct Helper {
    std::vector<std::string> inputArray;

    void swap(int i, int j) {
      std::string tmp = inputArray[i];
      inputArray[i] = inputArray[j];
      inputArray[j] = tmp;
    }

    bool bruteForce(int depth) {
      if (depth == inputArray.size()) {
        bool correct = true;
        for (int i = 0; i < inputArray.size() - 1; i++) {
          int differences = 0;
          for (int j = 0; j < inputArray[i].size(); j++) {
            if (inputArray[i][j] != inputArray[i + 1][j]) {
              differences++;
            }
          }
          if (differences != 1) {
            correct = false;
          }
        }
        if (correct) {
          return true;
        }
        return false;
      }
      for (int i = depth; i < inputArray.size(); i++) {
        swap(depth, i);
        if 	(bruteForce(depth + 1)) {
          return true;
        }
        swap(depth, i);
      }
      return false;
    }
  };

  Helper h;
  h.inputArray = inputArray;

  if (h.bruteForce(0)) {
    return true;
  }
  return false;
}
