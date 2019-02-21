bool checkUnique(std::vector<int> save){
        std::sort(save.begin(), save.end());
    for(int i = 0; i < save.size()-1; i++){
        if(save[i] == save[i+1]) {return false;}
        if(0 >= save[i] || save[i] > 9 || 0 >= save[i+1] || save[i+1]> 9) {return false;}
    }
    return true;
}
bool sudoku(std::vector<std::vector<int>> grid) {
    std::vector<int> save(grid.size());
    int index = 0;
    //check hang
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[0].size(); j++){
            save[j] = grid[i][j];
        }
        if(!checkUnique(save)) return false;
    }
    //check cot
    for(int i = 0; i < grid.size(); i++){
        for(int j = 0; j < grid[0].size(); j++){
            save[j] = grid[j][i];
        }
        if(!checkUnique(save)) return false;
    }
    //check 3x3
    std::vector< std::vector<int> > a{ {1,1}, {1,4}, {1,7},
                                       {4,1}, {4,4}, {4,7},
                                       {7,1}, {7,4}, {7,7} };
    for(int hang = 0; hang < 9; hang++){
        //add to vector Save for check Sodoku
        save[0] = grid[a[hang][0]-1][a[hang][1]-1];
        save[1] = grid[a[hang][0]-1][a[hang][1]];
        save[2] = grid[a[hang][0]-1][a[hang][1]+1];
        save[3] = grid[a[hang][0]][a[hang][1]-1];
        save[4] = grid[a[hang][0]][a[hang][1]];
        save[5] = grid[a[hang][0]][a[hang][1]+1];
        save[6] = grid[a[hang][0]+1][a[hang][1]-1];
        save[7] = grid[a[hang][0]+1][a[hang][1]];
        save[8] = grid[a[hang][0]+1][a[hang][1]+1];
        if(!checkUnique(save)) return false;
    }
    return true;
}
