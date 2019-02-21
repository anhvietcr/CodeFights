int differentSquares(std::vector<std::vector<int>> matrix) {
    if(matrix.size() < 2 || matrix[0].size() < 2) return 0;
    std::vector<int> str;
    for(int i = 0; i < matrix.size()-1; i++){
        for(int j = 0; j < matrix[0].size()-1; j++){
            if((abs(i-(i+1))==1) && (abs(j-(j+1))==1)){
                str.push_back(((matrix[i][j]*10 + matrix[i][j+1])*10 + matrix[i+1][j])*10 + matrix[i+1][j+1]);
            }
        }
    }
    std::sort(str.begin(), str.end());
    str.erase(std::unique(str.begin(), str.end()), str.end());
    
    return str.size();
}
