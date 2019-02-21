std::vector<std::vector<int>> minesweeper(std::vector<std::vector<bool>> matrix) {
/*
* * * * *
* \ | / *
* - o - *
* / | \ *
* * * * *
//check all
*/
    std::vector<std::vector<int>> save(matrix.size(), std::vector<int>(matrix[0].size()));
    for(int i = 0; i < matrix.size(); i++){
        for(int j = 0; j < matrix[0].size(); j++){
            int d = 0;
            //duoi
            if(i < matrix.size()-1 && matrix[i+1][j]) ++d;
            //tren
            if(i > 0 && matrix[i-1][j]) ++d;
            //trai
            if(j > 0 && matrix[i][j-1]) ++d;
            //phai
            if(j < matrix[0].size()-1 && matrix[i][j+1]) ++d;
            //tren trai
            if(i>0 && j>0 && matrix[i-1][j-1]) ++d;
            //tren phai
            if(i>0 && j < matrix[0].size()-1 && matrix[i-1][j+1]) ++d;
            //duoi trai
            if(i<matrix.size()-1 && j>0 && matrix[i+1][j-1]) ++d;
            //duoi phai
            if(i<matrix.size()-1 && j<matrix[0].size()-1 && matrix[i+1][j+1]) ++d;
            save[i][j] = d;
        }
    }
    
    return save;
}
