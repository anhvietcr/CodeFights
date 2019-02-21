bool check(int x, int y){
    return (0 <= x && x <= 7 && 0 <= y && y <= 7);
}
int chessKnight(std::string cell) {
    int d = 0;
    for(int x = -2; x <= 2; x++){
        for(int y = -2; y <= 2; y++){
            if(abs(x * y) == 2){
                if(check(cell[0] - '0' - 48 + x - 1, cell[1] - '0' + y - 1)){
                    d++;
                }
            }
        }
    }
    return d;
}
//cell[0] la chữ -> -'0' để qua số , -48 để qua thành hệ 10, -1 trong mảng bàn cờ
//cell[1] là số -> -'0' để chuyển qua hệ 10 trong số, -1 trong mảng bàn cờ