 std::vector<std::vector<int>> boxBlur(std::vector<std::vector<int>> image) {
    std::vector<std::vector<int>> save(image.size()-2, std::vector<int>(image[0].size()-2));
    int sum = 0, row = 0;
     //row -->  col
    for(int i = 1; i < image.size()-1; i++){  //row
        for(int j = 1; j < image[0].size()-1; j++){ //col
            sum = 0;
            for(int i2 = i-1; i2 <= i+1; i2++){  //row child
                for(int j2 = j-1; j2 <= j+1; j2++){ //col child
                    sum += image[i2][j2];
                }
            }
            save[i-1][j-1] = sum/9;  //save to vector output
        }
    }
    return save;
}
