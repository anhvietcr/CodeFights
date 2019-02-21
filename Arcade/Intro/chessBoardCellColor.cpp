bool chessBoardCellColor(std::string cell1, std::string cell2) {
    if((cell1[0] % 2 == 0 && cell1[1] %2 == 0) || (cell1[0] % 2 != 0 && cell1[1] %2 != 0)){
        if(cell2[0] % 2 ==0 && cell2[1] %2 != 0) return false;
        if(cell2[0] % 2 !=0 && cell2[1] %2 == 0) return false;
    }
    return true;
}
