bool tennisSet(int score1, int score2) {
    if(0<=score1 && score1<=7 && 0<=score2 && score2<=7){
        if(score1 < 5 || score2 < 5){
            if(score1 == 6 || score2 == 6){
                return true;
            }else{
                return false;
            }
        }else if(score1 >= 5 || score2 >= 5){
            if(score1 == score2){
                return false;
            }else if(score1 == 7 || score2 == 7){
                return true;
            }else{
                return false;
            }
        }else{
            return false;
        }
    }else{
        return false;
    }
}
 